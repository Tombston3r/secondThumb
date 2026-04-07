include <Servo.h>
int ServoPin = 9;

void setup() {
Serial.begin(9600);
Servo.attach(ServoPin);
};
void loop() {
Servo.write(90);
delay(50);
Servo.write(180)
delay(50)
Servo.write(0)
}
