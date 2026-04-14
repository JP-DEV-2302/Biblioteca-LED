#include <Arduino.h>
#include <LED.h>

Led pinLed(48);


void setup()
{
  pinLed.piscar(1.0, 10);
}

void loop()
{
  pinLed.update();
}
