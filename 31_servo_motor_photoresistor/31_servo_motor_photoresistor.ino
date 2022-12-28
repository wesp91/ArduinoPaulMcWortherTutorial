#import<Servo.h>

// pins
int servoPin = 9;
int brightnessPin = A0;

// light
int lightVal;
int minLight = 120;
int maxLight = 900;

// servo motor
Servo s;
int servoPos = 0;
int minServo = 0;
int maxServo = 180;

// line
float m;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(brightnessPin, INPUT);
  pinMode(servoPin, OUTPUT);
s.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:

  lightVal = analogRead(brightnessPin);
  Serial.print(lightVal);
  Serial.print(" - ");

m = (float)(maxServo - minServo)/(float)(maxLight - minLight);
servoPos = m * (lightVal - minLight);

Serial.print(servoPos);
  Serial.print(" - ");

// check max
if(servoPos < 0) servoPos = 0;
if(servoPos > 180) servoPos = 180;

Serial.println(servoPos);

s.write(servoPos);

}
