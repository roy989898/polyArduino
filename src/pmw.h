
// only pin 3/5/6/9/10/11 can apply pmw

// at setup set pinMode(3,OUTPUT)

// pmw 0-255

void pmwLight(int pin){
  int delayTime=10;
  for(int a=0;a<256;a++){
    analogWrite(pin,a);
    delay(delayTime);
  }
  for (int i = 255; i >=0; i--) {
    /* code */
    analogWrite(pin,i);
    delay(5);
  }
  delay(delayTime);

}
