/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"
#include "test.h"
#include "pmw.h"
#include "utSensor.h"
#include "motor.h"


#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif


int leftMotorPin=3;
int rightMotorPin=5;

void setup()
{
  // initialize LED digital pin as an output.
  // pinMode(LED_BUILTIN, OUTPUT);
  // Serial.begin(9600);
// pinMode(trig, OUTPUT);
// pinMode(echo, INPUT);
pinMode(leftMotorPin, OUTPUT);
pinMode(rightMotorPin, OUTPUT);
}

void loop()
{

  motorRun(leftMotorPin, rightMotorPin, 255, 255);


delay(500);
motorRun(leftMotorPin, rightMotorPin, 0, 0);
}
