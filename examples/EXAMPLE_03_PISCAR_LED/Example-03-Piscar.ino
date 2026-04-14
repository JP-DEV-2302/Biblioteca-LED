#include <Arduino.h>
#include <LED.h>

Led pinLed(48);


void setup()
{
  pinLed.piscar();
}

void loop()
{
  pinLed.update();
}
