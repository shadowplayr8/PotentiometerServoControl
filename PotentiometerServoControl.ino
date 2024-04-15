#include <Servo.h>

const int potPin = A0;
const int servoPin = 9;

Servo myServo;

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  int angle = map(analogRead(potPin), 0, 1023, 0, 180);
  myServo.write(angle);
  delay(15);
}