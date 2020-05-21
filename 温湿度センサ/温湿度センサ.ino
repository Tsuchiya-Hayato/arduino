#include <DHT.h>

const int PIN_DHT = 8;
DHT dht(PIN_DHT,DHT11);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11");
  dht.begin();
}

void loop() {

  delay(3000);

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  Serial.print("Humidity:  ");
  Serial.print(humidity);
  Serial.println("%\t");
  Serial.print("Temperature:  ");
  Serial.print(temperature);
  Serial.println(" *C");
}

//https://github.com/adafruit/Adafruit_Sensor
