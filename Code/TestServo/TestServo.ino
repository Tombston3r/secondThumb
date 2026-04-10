#include <Servo.h>
 
Servo monServo;
 
int angleMin = 40;   // limite basse pour CM509MG
int angleMax = 140;  // limite haute pour CM509MG
 
void setup() {
  monServo.attach(9);   // pin signal
}
 
void loop() {
  
  // Balayage de gauche à droite
  for (int angle = angleMin; angle <= angleMax; angle++) {
    monServo.write(angle);
    delay(20);
  }
 
  delay(1000);
 
  // Balayage de droite à gauche
  for (int angle = angleMax; angle >= angleMin; angle--) {
    monServo.write(angle);
    delay(20);
  }
 
  delay(1000);
}