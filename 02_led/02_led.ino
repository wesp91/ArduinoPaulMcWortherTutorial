void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

// red led
int var = 0;
while(var < 5)
{
  digitalWrite(8,HIGH);
  delay(200);
  digitalWrite(8,LOW);
  delay(200);

  var++;
}

// blue led
var = 0;
while(var < 10)
{
  digitalWrite(9,HIGH);
  delay(200);
  digitalWrite(9,LOW);
  delay(200);

  var++;
}

// green led
var = 0;
while(var < 15)
{
  digitalWrite(10,HIGH);
  delay(200);
  digitalWrite(10,LOW);
  delay(200);

  var++;
}
}
