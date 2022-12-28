int redPin = 13;
int bluePin = 11;
int greenPin = 2;
String input;
String msg = "What led do you want to turn on? ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);
pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(msg);

while(Serial.available() == 0){}

input = Serial.readString();
Serial.println(input);

if(input == "red" || input == "Red" || input == "RED")
{
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
}

if(input == "blue" || input == "Blue" || input == "BLUE")
{
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
}

if(input == "green" || input == "Green" || input == "GREEN")
{
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
}
}
