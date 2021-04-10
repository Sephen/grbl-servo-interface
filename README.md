# Grbl Servo Interface
An interface between a Grbl Board and a servo.\
- Use the original Grbl code without modifications.\
- You can still use a spindle or laser

Use an Arduino to act as the interface.
Power the Arduino and the servo to the 5V comming from the Grbl Board.
Connect D11 from the Grbl board to an analog in like A3 to read the spindle/laser power.
Use the D9 from the arduino to connect to the signal of the servo.

Change these values to suit your needs:\
int maxPosition = 55; // When the spindle is turning or laser is on\
int minPosition = 10; // When both the spindle and laser are off
