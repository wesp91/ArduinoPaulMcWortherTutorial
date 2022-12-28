int voltPin=A2;
int readVal;
float outVolt;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal = analogRead(voltPin);
outVolt = (5./1023.)*readVal;
Serial.println(outVolt);
delay(delayTime);
}
