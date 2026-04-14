#include <Arduino.h>
#include <LED.h>

Led pinLed(48);


void setup()
{
  pinLed.piscar(5.0);
}

void loop()
{
  pinLed.update();
}
