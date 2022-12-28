#include <LiquidCrystal.h>
#include "DHT.h"
#define Type DHT11
#define LCD_COLUMNS 16
#define LCD_ROWS 2

// DHT variables
int sensePin = 2;
DHT HT(sensePin, Type);
float humidity;
float tempC;
float tempF;

// lcd variabels
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int setTime = 500;

void setup() {
  Serial.begin(9600);
pinMode(sensePin, INPUT);
HT.begin();
lcd.begin(LCD_COLUMNS,LCD_ROWS);
delay(setTime);
}

void loop() {
humidity = HT.readHumidity();
tempC = HT.readTemperature();

lcd.setCursor(0,0);
lcd.print("Temp " + String(tempC,1) + "C");
lcd.setCursor(0,1);
lcd.print("Humidity " + String(humidity,0));

delay(1000);
lcd.clear();
}
