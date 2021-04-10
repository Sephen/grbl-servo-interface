/* Grbl Servo Interface
 by Sephen <https://sephen.nl>
 This example code is in the public domain.

 modified 9 Apr 2021
 by Sephen de Vos

This code will act as an interface between a 
grbl board and a servo. This way you can use
the original Grbl code without modifications.

*/

#include <Servo.h>
          
Servo liftServo;
 
int maxPosition = 55; // When the spindle is turning or laser is on
int minPosition = 10; // When both the spindle and laser are off
int SpindlePin = A3; // Probably pin D11 on your Grbl Board
int curPosition = minPosition;

void setup() {
  liftServo.attach(9);
}

void loop() {
  int SpindleValue = analogRead(SpindlePin);
  curPosition = map(SpindleValue, 0, 1023, minPosition, maxPosition);
  liftServo.write(curPosition);
}
