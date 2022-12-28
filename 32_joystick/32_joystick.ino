// pins
int xPin = A0;
int yPin = A1;
int switchPin = 2;

//
int xVal;
int yVal;
int switchVal;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
pinMode(switchPin, INPUT);
digitalWrite(switchPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xVal = analogRead(xPin);
yVal = analogRead(yPin);
switchVal = digitalRead(switchPin);
delay(1000);

Serial.print("X value = ");
Serial.println(xVal);
Serial.print("Y value = ");
Serial.println(yVal);
Serial.print("Switch value = ");
Serial.println(switchVal);
Serial.println();
}
