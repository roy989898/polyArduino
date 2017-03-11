#include "Arduino.h"


int in1=5;
int in2=6;
int in3=9;
int in4=10;

// pinMode(int1,OUTPUT);
// pinMode(int2,OUTPUT);
// pinMode(in3,OUTPUT);
// pinMode(in4,OUTPUT);


// when int3>in4,move back
void setupMotor(){
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

void leftMotorMove(int out3,int out4){
  analogWrite(in3, out3);
  analogWrite(in4, out4);

}

void leftMotorFont(int lv){
leftMotorMove(0,lv);
}

void leftMotorBack(int lv){
  leftMotorMove(lv,0);
}

void leftMotorStop(){
  leftMotorMove(0,0);
}

void rightMotorMove(int out1,int out2){
  analogWrite(in1, out1);
  analogWrite(in2, out2);

}

void rightMotorFont(int lv){
  rightMotorMove(0,lv);
}

void rightMotorBack(int lv){
  rightMotorMove(lv,0);
}

void rightMotorStop(){
  rightMotorMove(0,0);
}

void motorFont(int lv/*0-255*/){
  rightMotorFont(lv);
  leftMotorFont(lv);

}

void motorBack(int lv/*0-255*/){
  rightMotorBack(lv);
  leftMotorBack(lv);

}

void motorStop(){
  leftMotorStop();
  rightMotorStop();
}
