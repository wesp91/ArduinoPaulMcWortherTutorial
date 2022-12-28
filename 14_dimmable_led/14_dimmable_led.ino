int potOutputPin= A1;
int ledInputPin = 3;
int readValue;
int ledBrightness;

void setup() {
  // put your setup code here, to run once:
pinMode(potOutputPin, INPUT);
pinMode(ledInputPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readValue = analogRead(potOutputPin);
Serial.println(readValue);
ledBrightness = (255./1023.) * readValue ;

analogWrite(ledInputPin, ledBrightness);
}
