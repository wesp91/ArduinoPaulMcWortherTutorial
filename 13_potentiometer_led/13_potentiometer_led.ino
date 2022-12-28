int voltPin = A2;
int redPin = 9;
int yellowPin = 7;
int greenPin = 4;

int readVal;
float outVolt;
int delayTime = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(voltPin, INPUT);

pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);
pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal = analogRead(voltPin);
outVolt = (5./1023.)*readVal;
Serial.print("Potentiometer voltage is ");
Serial.println(outVolt);

if(outVolt > 4.){
  digitalWrite(redPin,HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
}
else{
  if(outVolt > 3.){
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);  
  }
  else{
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    }
}

delay(delayTime);
}
