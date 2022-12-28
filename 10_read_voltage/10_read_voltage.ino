int readPin = A3;
float voltage;
int delayTime = 1000;
float inputVoltage = 5.;
float maxVoltage = 1023.;

void setup() {
pinMode(readPin,INPUT);
Serial.begin(9600);
}

void loop() {

voltage = analogRead(readPin)*inputVoltage/maxVoltage;


// printing
Serial.println(voltage);
delay(delayTime);

}
