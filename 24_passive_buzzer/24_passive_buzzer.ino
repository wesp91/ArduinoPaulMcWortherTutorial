int buzzerPin = 10;
int potPin = A5;

int btMax = 10000;
int btMin = 60;
int currentBt = 60;

int potValue;

void setup() {
  // put your setup code here, to run once:
pinMode(buzzerPin, OUTPUT);
pinMode(potPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

potValue = analogRead(potPin);
currentBt = ((10000. - 60.)/1024.)*potValue + 60;
Serial.print(potValue);
Serial.print(" - ");
Serial.println(currentBt);


digitalWrite(buzzerPin, HIGH);
delayMicroseconds(currentBt);
digitalWrite(buzzerPin, LOW);
delayMicroseconds(currentBt);
}
