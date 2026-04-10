#include <Servo.h>

Servo monServo;

int emgPin = A7;
int emgValue = 0;

int angleMin = 40;
int angleMax = 140;

void setup() {
  Serial.begin(9600);
  monServo.attach(9);
}

void loop() {
  emgValue = analogRead(emgPin);
  Serial.println(emgValue);

  if (emgValue > 100) {
    // Balayage de gauche à droite
    Serial.println("Montée en cours")
    for (int angle = angleMin; angle <= angleMax; angle++) {
      monServo.write(angle);
      delay(20);
    }
    Serial.println("Montée finie")
  } else {
    // Balayage de droite à gauche
    Serial.println("Descente en cours")
    for (int angle = angleMax; angle >= angleMin; angle--) {
      monServo.write(angle);
      delay(20);
    }
    Serial.prinln("Descente finie")
  }
}
