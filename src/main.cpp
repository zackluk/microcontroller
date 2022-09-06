#include <Arduino.h>

int ledPin = 21;
int switchPin = 27;
int led2Pin = 19;
int led3Pin = 2;
int led4Pin = 15;
int led5Pin = 14;
bool buttonPressed = false;
int counter = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
  pinMode(led5Pin, OUTPUT);
}

void changeAnimation()
{
  if (counter >= 2)
  {
    counter = 0;
  }
  else
  {
    counter++;
  }
}

void animation1()
{

  digitalWrite(ledPin, HIGH);
  delay(200);

  digitalWrite(ledPin, LOW);
  delay(500);

  digitalWrite(led2Pin, HIGH);
  delay(200);

  digitalWrite(led2Pin, LOW);
  delay(500);

  digitalWrite(led3Pin, HIGH);
  delay(200);

  digitalWrite(led3Pin, LOW);
  delay(500);

  digitalWrite(led4Pin, HIGH);
  delay(200);

  digitalWrite(led4Pin, LOW);
  delay(500);

  digitalWrite(led5Pin, HIGH);
  delay(200);

  digitalWrite(led5Pin, LOW);
  delay(500);

  digitalWrite(led5Pin, HIGH);
  delay(200);

  digitalWrite(led5Pin, LOW);
  delay(500);

  digitalWrite(led4Pin, HIGH);
  delay(200);

  digitalWrite(led4Pin, LOW);
  delay(500);

  digitalWrite(led3Pin, HIGH);
  delay(200);

  digitalWrite(led3Pin, LOW);
  delay(500);

  digitalWrite(led2Pin, HIGH);
  delay(200);

  digitalWrite(led2Pin, LOW);
  delay(500);

  digitalWrite(ledPin, HIGH);
  delay(200);

  digitalWrite(ledPin, LOW);
  delay(500);
}
void animation2()
{
  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(led5Pin, HIGH);
  delay(200);

  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(led5Pin, LOW);
  delay(500);

  digitalWrite(led2Pin, HIGH);
  delay(200);
  digitalWrite(led4Pin, HIGH);
  delay(200);

  digitalWrite(led2Pin, LOW);
  delay(500);
  digitalWrite(led4Pin, LOW);
  delay(500);

  digitalWrite(led3Pin, HIGH);
  delay(200);

  digitalWrite(led3Pin, LOW);
  delay(500);

  digitalWrite(led3Pin, HIGH);
  delay(200);

  digitalWrite(led3Pin, LOW);
  delay(500);

  digitalWrite(led2Pin, HIGH);
  delay(200);
  digitalWrite(led4Pin, HIGH);
  delay(200);

  digitalWrite(led2Pin, LOW);
  delay(500);
  digitalWrite(led4Pin, LOW);
  delay(500);

  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(led5Pin, HIGH);
  delay(200);

  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(led5Pin, LOW);
  delay(500);
}
void animation3()
{
  digitalWrite(ledPin, HIGH);
  delay(200);

  digitalWrite(ledPin, LOW);
  delay(500);

  digitalWrite(ledPin, HIGH);
  delay(200);

  digitalWrite(ledPin, LOW);
  delay(500);

  digitalWrite(led2Pin, HIGH);
  delay(200);

  digitalWrite(led2Pin, LOW);
  delay(500);

  digitalWrite(ledPin, HIGH);
  delay(200);

  digitalWrite(ledPin, LOW);
  delay(500);

  digitalWrite(led2Pin, HIGH);
  delay(200);

  digitalWrite(led2Pin, LOW);
  delay(500);

  digitalWrite(led3Pin, HIGH);
  delay(200);

  digitalWrite(led3Pin, LOW);
  delay(500);

  digitalWrite(ledPin, HIGH);
  delay(200);

  digitalWrite(ledPin, LOW);
  delay(500);

  digitalWrite(led2Pin, HIGH);
  delay(200);

  digitalWrite(led2Pin, LOW);
  delay(500);

  digitalWrite(led3Pin, HIGH);
  delay(200);

  digitalWrite(led3Pin, LOW);
  delay(500);

  digitalWrite(led4Pin, HIGH);
  delay(200);

  digitalWrite(led4Pin, LOW);
  delay(500);

  digitalWrite(ledPin, HIGH);
  delay(200);

  digitalWrite(ledPin, LOW);
  delay(500);

  digitalWrite(led2Pin, HIGH);
  delay(200);

  digitalWrite(led2Pin, LOW);
  delay(500);

  digitalWrite(led3Pin, HIGH);
  delay(200);

  digitalWrite(led3Pin, LOW);
  delay(500);

  digitalWrite(led4Pin, HIGH);
  delay(200);

  digitalWrite(led4Pin, LOW);
  delay(500);

  digitalWrite(led5Pin, HIGH);
  delay(200);

  digitalWrite(led5Pin, LOW);
  delay(500);
}


void visualise()
{
  if(counter == 0)
  {
    animation1();
  }
  else if(counter == 1)
  {
    animation2();
  }
  else
  {
    animation3();
  }

}


void loop()
{

  int buttonState = digitalRead(switchPin);
  Serial.println(buttonState);
  if (buttonState == HIGH)
  {
    buttonPressed = true;
    return;
  }
  else
  {
    if (buttonPressed)
    {
      changeAnimation();
    }

    buttonPressed = false;
    visualise();
  }
}
