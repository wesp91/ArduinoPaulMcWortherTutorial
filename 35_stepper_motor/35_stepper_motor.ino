#include<Stepper.h>

int stepsPerRevolution = 2048; // different for each step motor
int motSpeed = 3; // expressed in rpm
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int dt = 500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myStepper.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
myStepper.step(stepsPerRevolution);
delay(dt);
//myStepper.step(-stepsPerRevolution);
//delay(dt);
}

/*#define A 8
#define B 9
#define C 10
#define D 11
 
#define NUMBER_OF_STEPS_PER_REV 2048

int step_number = 0;
int step_number_total = 0;

void setup(){
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
Serial.begin(9600);
}

void write(int a,int b,int c,int d){
digitalWrite(A,a);
digitalWrite(B,b);
digitalWrite(C,c);
digitalWrite(D,d);
}

void onestep(){
switch(step_number)
{
  case 0:
  write(1,0,0,0);
  break;
  case 1:
  write(0,1,0,0);
  break;
  case 2:
  write(0,0,1,0);
  break;
  case 3:
  write(0,0,0,1);
  break;
}

step_number++;
if(step_number > 3) step_number = 0;

step_number_total++;
}

void loop(){
  Serial.println(step_number_total);
  if(step_number_total > 2048) step_number_total = 0;
onestep();
delay(2);
}*/
