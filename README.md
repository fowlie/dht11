# DHT11
Arduino sketch for å lese temperatur og relativ luftfuktighet fra en [DHT11](https://www.dx.com/p/keyestudio-dht11-temperature-humidity-sensor-black-blue-429461#.W6D6AhQ8xhE) sensor på en [Arduino Nano](https://www.arduino.cc/en/Guide/ArduinoNano).
For å lese data inn i Prometheus bruk [denne Go-koden](https://github.com/ckibsgaa/DHT11TemperaturePoller) for å sette opp en http-server med et scraping endepunkt.
