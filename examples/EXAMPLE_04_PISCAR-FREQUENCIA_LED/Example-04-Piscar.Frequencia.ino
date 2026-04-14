#include <Arduino.h>
#include <LED.h>

Led pinLed(48);


void setup()
{
  pinLed.piscar(5.0);//este método deverá ser usado caso você queira controlar a Frequência do Led.
}

void loop()
{
  pinLed.update();//Este método smepre deverá ser chamado dentro do loop();
}
