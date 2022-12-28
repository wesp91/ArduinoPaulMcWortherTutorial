int buzzPin = 8;
int potPin = A3;
int potValue;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

potValue = analogRead(potPin);

if(potValue > 500)
{
  digitalWrite(buzzPin, HIGH);
}
else
{
  digitalWrite(buzzPin, LOW);
  }
}
