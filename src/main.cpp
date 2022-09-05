#include <Arduino.h>
#define MAX_DISTNACE 600
#define ECHO_TIMEOUT MAX_DISTNACE * 2 * 29
#define SPEED_OF_SOUND 0.034

int echo_pin = 26;
int trig_pin = 17;
int led_pin = 25;

int readValue()
{
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);

  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trig_pin, LOW);

  unsigned long duration = pulseIn(echo_pin, HIGH, ECHO_TIMEOUT);

  return duration * SPEED_OF_SOUND / 2;
}

void setup()
{
  pinMode(echo_pin, INPUT);
  pinMode(trig_pin, OUTPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

long map(long x, long in_min, long in_max, long out_min, long out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void loop()
{
  int distance = readValue();
  if(distance > 100)
  {
    distance = 100;
  }


  int interpreted_distance = 255 - map(distance, 0, 100, 0, 255);

  analogWrite(25, interpreted_distance);
  Serial.print(distance);
  Serial.print(", ");
  Serial.print(interpreted_distance);
  Serial.print("\n");
  delay(100);
}