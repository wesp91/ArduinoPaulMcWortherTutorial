#include <LiquidCrystal.h>


// LCD variables
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
const int lcd_columns = 16;
const int lcd_rows = 2;

// Messages
const String msg_ask_number = "Insert a number";
const String msg_ask_operator = "Insert operator";
const String msg_not_operator = "Not an operator";

// Operations variables
float firstNumber;
float secondNumber;
char operatorString;
float result;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(lcd_columns,lcd_rows);
}

void loop() {
  // put your main code here, to run repeatedly:
while(true)
{
  // first number
  Serial.print(msg_ask_number);
  lcd.setCursor(0,0);
  lcd.print(msg_ask_number);
  while(Serial.available() == 0) { }
  firstNumber = Serial.parseFloat();
  lcd.setCursor(0,1);
  lcd.print(firstNumber);
  delay(1000);
  lcd.clear();
  
  // second number
  Serial.print(msg_ask_number);
  lcd.setCursor(0,0);
  lcd.print(msg_ask_number);
  while(Serial.available() == 0) { }
  secondNumber = Serial.parseFloat();
  lcd.setCursor(0,1);
  lcd.print(secondNumber);
  delay(1000);
  lcd.clear();

  // operator
  Serial.print(msg_ask_operator);
  lcd.setCursor(0,0);
  lcd.print(msg_ask_operator);
  while(Serial.available() == 0) { }
  operatorString = Serial.readString()[0];


if(strcmp(operatorString,'+') == 0){
  result = firstNumber + secondNumber;
}
else if(strcmp(operatorString,'-') == 0){
  result = firstNumber - secondNumber;
  }
  else if(strcmp(operatorString,'*') == 0){
    result = firstNumber * secondNumber;
    }
    else if(strcmp(operatorString,'/') == 0){
      result = firstNumber / secondNumber;
      }
      else{
        Serial.println();
        Serial.print("-------------");
        Serial.println();
        lcd.setCursor(0,1);
        lcd.print(msg_not_operator);
        delay(1000);
        lcd.clear();
        continue;  
      }
  
  lcd.setCursor(0,1);
  lcd.print(operatorString);
  delay(1000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Result");
  lcd.setCursor(0,1);
  lcd.print(String(firstNumber,1) + operatorString + String(secondNumber,1) + "=" + String(result,1));

  delay(2000);

  lcd.clear();
}
}
