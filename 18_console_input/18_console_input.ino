int pin = 12;
int numBlinks;
String msg= "How many blinks do you want? ";
int j;
int blinkTime = 500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(msg);
while(Serial.available() == 0) { }

numBlinks = Serial.parseInt();  
Serial.println(numBlinks);

for(j = 0; j < numBlinks; j++)
{
  digitalWrite(pin, HIGH);
  delay(blinkTime);
  digitalWrite(pin,LOW);
  delay(blinkTime);
}
}
