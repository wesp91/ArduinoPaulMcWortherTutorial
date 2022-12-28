int triggerPin = 12;
int echoPin = 11;
int pingTravelTime = 0;


void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(triggerPin, LOW);
delayMicroseconds(10);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10);
digitalWrite(triggerPin, LOW);
pingTravelTime = pulseIn(echoPin, HIGH);
Serial.println(pingTravelTime);
}
