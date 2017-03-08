#include "Arduino.h"

// need to set up
// must be analog pin
// pinMode(leftMotorPin, OUTPUT);
// pinMode(rightMotorPin, OUTPUT);


void motorRun(int leftPin,int rightpin,int leftOutput/*0-255*/,int rightOupput){

  analogWrite (leftPin, leftOutput);
  analogWrite (rightpin, rightOupput);
}
