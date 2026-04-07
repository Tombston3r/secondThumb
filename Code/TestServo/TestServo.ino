#include <Servo.h>

Servo myServo;
int ServoPin = 9;

void setup() {
  Serial.begin(9600);
  myServo.attach(ServoPin);
}

void loop() {
  myServo.write(90);
  delay(50);
  myServo.write(180);
  delay(50);
  myServo.write(0);
  delay(50);
}
