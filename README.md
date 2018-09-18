# DHT11

Arduino sketch to read temperature and relative humidity from a [DHT11](https://www.dx.com/p/keyestudio-dht11-temperature-humidity-sensor-black-blue-4) sensor on an [Arduino Nano](https://www.arduino.cc/en/Guide/ArduinoNano). 
To add the readings to a Prometheus server, [this Go program](https://github.com/ckibsgaa/DHT11TemperaturePoller) will read the data from the serial port and start as http server with a scraping endpoint.
