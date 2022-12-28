int photoPin = A0;
int redPin = 7;
int greenPin = 2;
int lightVal;
int d = 250;

void setup() {
  // put your setup code here, to run once:
pinMode(photoPin, INPUT);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(photoPin);
Serial.println(lightVal);
if(lightVal > 300)
{
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
}
else
{
  
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);
}
}
