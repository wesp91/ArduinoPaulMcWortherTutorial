int redPin = 2;
int buttonPin = 7;
int buttonRead;
int dt = 250;

 void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
pinMode(buttonPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead = digitalRead(buttonPin);
Serial.println(buttonRead);
delay(dt);
}
