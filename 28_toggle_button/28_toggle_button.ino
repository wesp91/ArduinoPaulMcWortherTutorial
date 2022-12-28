int redPin = 2;
int buttonPin = 7;

int buttonPrevInput = 1;
int buttonCurrentInput = 1;

bool buttonState = false;

 void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
pinMode(buttonPin, INPUT);
Serial.begin(9600);
}

void loop() {

buttonPrevInput = buttonCurrentInput;
buttonCurrentInput = digitalRead(buttonPin);
Serial.println(buttonCurrentInput);
if(buttonPrevInput == 0 && buttonCurrentInput == 1)
{
  buttonState = !buttonState;
}

digitalWrite(redPin, buttonState ? HIGH : LOW);
}
