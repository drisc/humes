#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>
#include <Adafruit_TSL2561_U.h>
#include <ArduinoJson.h>
#include <DHT.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

#define DHT_PIN 12
#define DHT_TYPE DHT22
DHT dht22(DHT_PIN, DHT_TYPE);
Adafruit_BMP085_Unified bmp180 = Adafruit_BMP085_Unified(10085);
Adafruit_TSL2561_Unified tsl2561 = Adafruit_TSL2561_Unified(TSL2561_ADDR_FLOAT, 12345);

float temp;
float prss;
float hum;
float lux;

void setup() {
  dht22.begin();
  bmp180.begin();
  tsl2561.enableAutoRange(true);
  tsl2561.setIntegrationTime(TSL2561_INTEGRATIONTIME_13MS);
  Serial.begin(115200);
}

void loop() {
  temp = getTemp();
  prss = getPrss();
  hum = getHum();
  lux = getLux();

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("ºC");
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.println(" %");
  Serial.print("Pressure: ");
  Serial.print(prss);
  Serial.println(" hPa");
  Serial.print("Light: ");
  Serial.print(lux);
  Serial.println(" lx");
  delay(20000);
}


float getTemp() {
  return dht22.readTemperature();
}
float getHum() {
  return dht22.readHumidity();
}
float getPrss() {
  sensors_event_t event;
  bmp180.getEvent(&event);
  return event.pressure;
}
float getLux() {  
  sensors_event_t event;
  tsl2561.getEvent(&event);
  return event.light;
}
