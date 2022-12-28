int pinButtonDown = 8;
int pinButtonUp = 7;
int ledPin = 3;

// button up
int buttonUpPrevValue = 1;
int buttonUpValue = 1;

// button down
int buttonDownPrevValue = 1;
int buttonDownValue = 1;

// led
int ledBrightness; // between 0 and 255
int brightnessStep = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(pinButtonDown, INPUT);
pinMode(pinButtonUp, INPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

// button up
buttonUpPrevValue = buttonUpValue;
buttonUpValue = digitalRead(pinButtonUp);

if(buttonUpPrevValue == 0 && buttonUpValue == 1)
{
  ledBrightness += brightnessStep;
  if(ledBrightness > 255) ledBrightness = 255;
}

// button down
buttonDownPrevValue = buttonDownValue;
buttonDownValue = digitalRead(pinButtonDown);

if(buttonDownPrevValue == 0 && buttonDownValue == 1)
{
  ledBrightness -= brightnessStep;
  if(ledBrightness < 0) ledBrightness = 0;  
}

analogWrite(ledPin, ledBrightness);
}
