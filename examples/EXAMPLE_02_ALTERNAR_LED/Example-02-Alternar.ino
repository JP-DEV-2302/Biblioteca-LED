#include <Arduino.h>
#include <LED.h>

Led pinLed(45);


void setup()
{
}

void loop()
{
  
  pinLed.update();//Este método deve ser chamado sempre no loop();
  pinLed.alternar();//Alterna o estado do Led.
  delay(1000);
 
}
