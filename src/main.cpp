#include <Arduino.h>

int delay_value = 500;
int led_pin = 26;

void setup() {
  pinMode(led_pin, OUTPUT);
}

void loop() {
  digitalWrite(led_pin, HIGH);
  delay(delay_value); 
  digitalWrite(led_pin, LOW);
  delay(delay_value);
}