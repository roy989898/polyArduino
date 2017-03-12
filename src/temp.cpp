/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"
#include "pmw.h"
#include "utSensor.h"
#include "motor.h"
#include "lightSensor.h"
#include <stdlib.h>





int rightTrigPin=2;
int rightEchoPin=3;



int leftTrigPin=8;
int leftEchoPin=9;
int irDistancePin=7;


int hasWall=0;




void setup()
{
  pinMode(rightTrigPin, OUTPUT);
  pinMode(rightEchoPin, INPUT);
  pinMode(leftTrigPin, OUTPUT);
  pinMode(leftEchoPin, INPUT);
  pinMode(irDistancePin, INPUT);

  setupMotor();

  Serial.begin(9600);


}

void loop()
{
//   put your main code here, to run repeatedly:

int rightDistance=detectDistance(rightTrigPin,rightEchoPin);

int leftDistance=detectDistance(leftTrigPin,leftEchoPin);

int centerDistance=digitalRead(irDistancePin);
//  0 is need to avoid

// Serial.print("Right ");
// Serial.print(rightDistance);
// Serial.print(" cm");
//
// Serial.print("Center ");
// Serial.print(centerDistance);
//
//
// Serial.print("Left ");
// Serial.print(leftDistance);
// Serial.println(" cm");


int leftPMW=map(rightDistance, 2, 100, 0, 255);
int rightPMW=map(leftDistance, 2, 100, 0, 255);

leftMotorMoveFont(leftPMW);
rightMotorMoveFont(rightPMW);






}
