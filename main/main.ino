#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int posClose = 20;    // variable to store the servo position
int posOpen = 110;

void setup() {
  // attach pins
  myservo.attach(5);
}

int open(int posClose, int posOpen) {
  for (int pos = posClose; pos <= posOpen; pos += 1) { 
    // in steps of 1 degree
    myservo.write(pos);              
    delay(15);                      
  }
  return myservo.read();
}

int close (int posClose, int posOpen) {
   for (int pos = posOpen; pos >= posClose; pos -= 1) {
    myservo.write(pos);              
    delay(15);                       
  }
  return myservo.read();
}

void loop() {
  

 myservo.detach();
}
