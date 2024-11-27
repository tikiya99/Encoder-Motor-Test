#include <Arduino.h>
#define encoderA 14
#define encoderB 12
int Dir = 0;
int  b = 0;

volatile long temp, counter = 0; 
void setup() {
  Serial.begin (9600);

  pinMode(encoderA, INPUT_PULLUP); 
  
  pinMode(encoderB, INPUT_PULLUP);
 attachInterrupt(encoderA, f1, CHANGE);
  }
   
  void loop() {

  Serial.println (counter);
  Serial.println (b);

  
  }
  void checkDirection(){
  b = digitalRead(encoderB);

 
}
  void f1() {
  checkDirection();
  counter ++;
  
}