# Humes | Environmental Sensors & Controls

A data driven, mesh networked home automation project

<hr>

## Components
- [Adafruit HUZZAH ESP8266](https://shop.pimoroni.com/products/adafruit-huzzah-esp8266-breakout)
- [DHT22 Temperature and Humidity Sensor](https://www.amazon.co.uk/dp/B06Y37X9G4/)
- [MH-Raindrop Detector](https://www.amazon.co.uk/dp/B01H5M2VKW/)
- [BMP180 Pressure Sensor](https://www.amazon.co.uk/gp/product/B00YM2SFK4/)
- [TSL2561 Light Sensor](https://www.amazon.co.uk/gp/product/B0714N3RDB/)

## OES | Outdoor Environment Sensor
A small circuitboard holding an ESP-12F with a DHT22, TLS2165, BMP180 and a raindrop sensor. All the components housed in a small enclosure and placed outside with a solar panel. The sensor is connected to a WiFi Mesh which pushes data to a node and allows posting of weather information to OpenWeatherMap and internal database to inform remotes.

## IES | Internal Environment Sensor
While similar to the OES, this board removes the TLS2165 and MH-Raindrop Detector and gains the MQ135 Air Quality sensor. Information for each room can be entered on the admin page of the main node.

## Remote | Data Controlled Switches
Remotes contain all the functions needed to interface with the Mesh and activate/deactivate equipment. They can be hidden inside the body of a device to toggle power and forward basic commands, provided the device allows serial communication.
