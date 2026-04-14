#include <Arduino.h>
#include <LED.h>

Led pinLed(48);


void setup()
{
  pinLed.piscar(1.0, 10);//Este método sempre deverá ser chamado caso você queira controlar a Frequência e a quantidade de Repetições desejadas.
}

void loop()
{
  pinLed.update();//Este método deverá sempre ser chamado dentro do loop();
}
