#import<Servo.h>

// pins
int servoPin = 9;

// servo motor
Servo s;
int servoPos = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(servoPin, OUTPUT);
s.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What angle?");

while(Serial.available() == 0){}

servoPos = Serial.parseInt();
s.write(servoPos);

}
