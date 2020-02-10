#include <Arduino.h>


int LED_Driving_pin=7;

void setup() {
  Serial.begin(9600);
  pinMode(LED_Driving_pin, OUTPUT);
  }

void loop() {
  //digitalWrite(LED_Driving_pin, HIGH);
  //delay();
  digitalWrite(LED_Driving_pin, LOW);
  //delay();
}