int pin = 8;
int shortDelay = 250;
int longDelay = 700;
int pauseDelay = 1000;
int wordPauseDelay = 2000;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin,HIGH);
delay(shortDelay);
digitalWrite(pin,LOW);
delay(shortDelay);
digitalWrite(pin,HIGH);
delay(shortDelay);
digitalWrite(pin,LOW);
delay(shortDelay);
digitalWrite(pin,HIGH);
delay(shortDelay);
digitalWrite(pin,LOW);
delay(shortDelay);


delay(pauseDelay);


digitalWrite(pin,HIGH);
delay(longDelay);
digitalWrite(pin,LOW);
delay(longDelay);
digitalWrite(pin,HIGH);
delay(longDelay);
digitalWrite(pin,LOW);
delay(longDelay);
digitalWrite(pin,HIGH);
delay(longDelay);
digitalWrite(pin,LOW);
delay(longDelay);


delay(pauseDelay);

digitalWrite(pin,HIGH);
delay(shortDelay);
digitalWrite(pin,LOW);
delay(shortDelay);
digitalWrite(pin,HIGH);
delay(shortDelay);
digitalWrite(pin,LOW);
delay(shortDelay);
digitalWrite(pin,HIGH);
delay(shortDelay);
digitalWrite(pin,LOW);
delay(shortDelay);

delay(wordPauseDelay);
}
