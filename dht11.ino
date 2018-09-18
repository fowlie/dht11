#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 13
#define DHTTYPE DHT11

//Initialize sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  if (!isnan(t) && !isnan(h)) {
    Serial.print(t);
    Serial.print(";");
    Serial.print(h);
    Serial.print(";");
    float hi = dht.computeHeatIndex(t, h, false);
    Serial.println(hi);
    delay(1000);
  }
}
