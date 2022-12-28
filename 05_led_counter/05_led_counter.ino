int digPin0 = 12;
int digPin1 = 4;
int digPin2 = 3;
int digPin3 = 2;

int maxCounter = 15;

void setup() {
  // put your setup code here, to run once:
pinMode(digPin0, OUTPUT);
pinMode(digPin1, OUTPUT);
pinMode(digPin2, OUTPUT);
pinMode(digPin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int counter = 0;
int number;
int reminder;

while(counter <= maxCounter){
    reminder = counter % 2;
    number = counter/2;
    digitalWrite(digPin0, reminder == 1 ? HIGH : LOW);

    reminder = number % 2;
    number = number/2;
    digitalWrite(digPin1, reminder == 1 ? HIGH : LOW);
    
    reminder = number % 2;
    number = number/2;
    digitalWrite(digPin2, reminder == 1 ? HIGH : LOW);

    reminder = number % 2;
    number = number/2;
    digitalWrite(digPin3, reminder == 1 ? HIGH : LOW);

    delay(1000);
    counter++;
}
}
