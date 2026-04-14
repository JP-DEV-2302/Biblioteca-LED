#include <Arduino.h>
#include <LED.h>

Led pinLed(48);


void setup()
{
  pinLed.piscar();//Esta funcao pisca o LED infinitamente.
}

void loop()
{
  pinLed.update();//Este método deve sempre ser chamado dentro do loop();
}
