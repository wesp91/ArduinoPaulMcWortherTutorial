int photoPin = A0;
int buzzerPin = 7;
int lightVal;
int currentFreq = 250;
int freqMax = 10000;
int freqMin =100;


void setup() {
  // put your setup code here, to run once:
pinMode(photoPin, INPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(photoPin);
Serial.println(lightVal);

currentFreq = ((float)lightVal / 1024.)* (freqMax - freqMin) + freqMin;

 digitalWrite(buzzerPin, HIGH);
 delayMicroseconds(currentFreq);
 digitalWrite(buzzerPin, LOW);
 delayMicroseconds(currentFreq);

}
