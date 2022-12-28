int redPin = 6;
int greenPin = 3;
int bluePin = 11;
String msg = "What color do you want? ";
String myColor;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(msg);

while(Serial.available() == 0) {}

myColor = Serial.readString();
Serial.println(myColor);

if(myColor == "red" || myColor == "Red" || myColor == "RED")
{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);  
}

if(myColor == "blue" || myColor == "Blue" || myColor == "BLUE")
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);  
}

if(myColor == "green" || myColor == "Green" || myColor == "GREEN")
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);  
}

if(myColor == "off" || myColor == "Off" || myColor == "OFF")
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);  
}

if(myColor == "aqua" || myColor == "Aqua" || myColor == "AQUA")
{
  digitalWrite(redPin, LOW);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);  
}

if(myColor == "yellow" || myColor == "Yellow" || myColor == "YELLOW")
{
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);  
}

if(myColor == "magenta" || myColor == "Magenta" || myColor == "MAGENTA")
{
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 2255);  
}
}
