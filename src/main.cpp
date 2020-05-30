#include <Arduino.h>

const int switchPin = 7;
const int motorPin = 9;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  // motor1.drive(slowSpeed);
  digitalWrite(motorPin, HIGH);
  while (digitalRead(switchPin));
  // motor1.brake();
  digitalWrite(motorPin, LOW);
}

void loop() {

}
