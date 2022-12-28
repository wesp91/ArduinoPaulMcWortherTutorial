int readPin = A3;
int voltage;
int delayTIme = 1000;

void setup() {
pinMode(readPin,INPUT);
Serial.begin(9600);
}

void loop() {
voltage = analogRead(readPin);
Serial.println(voltage);
delay(delayTime);

}
