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

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif


int trig = 2;
int echo = 3;
void setup()
{
  // initialize LED digital pin as an output.
  // pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
}

void loop()
{
long int distance=detectDistance(trig,echo);

Serial.print(distance);
Serial.println(" cm");
delay(500);

}
