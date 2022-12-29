//#include <Servo.h>
#include "Servo.h" // import servo motor library.

Servo servo1; // define servo motor 1.
int servo1Pin = 11; // define the pin that will be control on servo motor 1.

Servo servo2; // define servo motor 2.
int servo2Pin = 12; // define the pin that will be control on servo motor 2.


int xPin = A0; // define the Pin input in joystic on the arduino and give it analog pin for x direction.
int xValue; // define variable to save the value of xPin in her.

int yPin = A1; // define the Pin input in joystic on the arduino and give it analog pin for y direction.
int yValue; // define variable to save the value of yPin in her.

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servo1Pin); // define the pin that the motor connected to it (servo motor 1).
  servo2.attach(servo2Pin); // define the pin that the motor connected to it (servo motor 2).
  pinMode (xPin,INPUT); // define the xpin as an input pin.
  pinMode (yPin,INPUT); // define the ypin as an input pin.
}

void loop() {
  // put your main code here, to run repeatedly:
  xValue = analogRead(xPin); // define it as a variable whose input has an analog value.
  servo1.write(map(xValue,0,1023,0,170)); // Converting the analog value taken from the xpin JSTIC into an angle to drive the motor, Writing the value after converting it inside the motor to move it.
  yValue = analogRead(yPin); // define it as a variable whose input has an analog value.
  servo2.write(map(yValue,0,1023,0,170)); // Converting the analog value taken from the ypin JSTIC into an angle to drive the motor, Writing the value after converting it inside the motor to move it.
}
