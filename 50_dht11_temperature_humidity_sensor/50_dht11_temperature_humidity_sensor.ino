#include "DHT.h"
#define Type DHT11

int sensePin = 2;
DHT HT(sensePin, Type);

float humidity;
float tempC;
float tempF;

int setTime = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(sensePin, INPUT);
HT.begin();
delay(setTime);
}

void loop() {
  // put your main code here, to run repeatedly:
humidity = HT.readHumidity();
tempC = HT.readTemperature();
tempF = HT.readTemperature(true);

Serial.println("Humidity " + String(humidity,0));
Serial.println("Temp " + String(tempC,1) + "C");
Serial.println("Temp " + String(tempF,2) + "F");
delay(5000);
}
