# Humes | Weather and Environmental Controls

## Components
- [Adafruit HUZZAH ESP8266](https://shop.pimoroni.com/products/adafruit-huzzah-esp8266-breakout)
- [DHT22 Temperature and Humidity Sensor](https://www.amazon.co.uk/dp/B06Y37X9G4/)
- [MH-Raindrop Detector](https://www.amazon.co.uk/dp/B01H5M2VKW/)
- [BMP180 Pressure Sensor](https://www.amazon.co.uk/gp/product/B00YM2SFK4/)
- [TSL2561 Light Sensor](https://www.amazon.co.uk/gp/product/B0714N3RDB/)

## Purpose
Tracking of weather conditions for realtime data and to inform environmental controls (EC).

## Concept
A small circuitboard holding an ESP8266 with a DHT22, TLS2165, BMP180 and a raindrop sensor. All components housed in a small enclosure and placed outside. Connected to small WiFi node which allows posting of weather information to WeatherUnderground and internal database to inform EC.

Connects to a small Pi Zero W server that hosts routing and control software for the EC.

## Name
HUMan Environmental Sensor
