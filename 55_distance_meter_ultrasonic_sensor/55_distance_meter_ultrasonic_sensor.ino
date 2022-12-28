int triggerPin = 12;
int echoPin = 11;
float pingTravelTime = 0;
float distance = 0;
float speedOfSound = 343.; // meters per seconds

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
Serial.print("Ping Travel Time is:");
Serial.println(pingTravelTime);

distance = speedOfSound * (pingTravelTime / 2) / 1000000;
Serial.print("Distance is:");
Serial.println(distance);
Serial.println();
delay(2000);
}
