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


if(rightDistance<20&&leftDistance<20&&centerDistance==0){
  // has a wall infornt of the car
  hasWall=1;
  int q=rand()%2;
  if(q==0){
    motorMoveRight(250);

  }else{
    motorMoveLeft(250);
  }

  delay(1500);


}else{
  hasWall=0;
  if(rightDistance>0&&rightDistance>20&&centerDistance!=0){
    // right side have nothing
  leftMotorMoveFont(210);
  }else{
    leftMotorMoveBack(190);

  }

  if (leftDistance>0&&leftDistance>20&&centerDistance!=0) {
    // left side have nothing
    rightMotorMoveFont(210);
  }else{
    rightMotorMoveBack(190);
  }

}






}
