#include <Arduino.h>

const int switchPin = 7;
const int motorPin = 9;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  digitalWrite(motorPin, HIGH);
  while (digitalRead(switchPin));
  digitalWrite(motorPin, LOW);
}

void loop() {

}
