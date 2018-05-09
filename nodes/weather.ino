#include <DHT.h>

#define DHT_PIN 4
#define DHT_TYPE DHT11
DHT dht(DHT_PIN, DHT_TYPE);

float temp;
float hum;
float lux;

void setup() {
  dht.begin();
  Serial.begin(115200);
}

void loop() {
  temp = getTemp();
  hum = getHum();

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("ºC");
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.println(" %");
  //Serial.print("Light: ");
  //Serial.print(lux);
  //Serial.println(" lx");
  delay(20000);
}


float getTemp() {
  return dht.readTemperature();
}
float getHum() {
  return dht.readHumidity();
}
//float getLux() {  
//}

