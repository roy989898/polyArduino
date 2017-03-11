#include "Arduino.h"


int in1=5;
int in2=6;
int in3=9;
int in4=10;

// pinMode(int1,OUTPUT);
// pinMode(int2,OUTPUT);
// pinMode(in3,OUTPUT);
// pinMode(in4,OUTPUT);


// when int3>in4,move font
void setupMotor(){
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

void rightMotorMove(int out3,int out4){
  analogWrite(in3, out3);
  analogWrite(in4, out4);

}

void rightMotorFont(int lv){
rightMotorMove(lv,0);
}

void rightMotorBack(int lv){
  rightMotorMove(0,lv);
}

void moveFont(int lv/*0-255*/){

}
