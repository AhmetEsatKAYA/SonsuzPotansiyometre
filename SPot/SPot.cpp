#include "Arduino.h"
#include "SPot.h" 

SPot::SPot(int pin)
{
  _pin = pin;
}

void SPot::begin()
{
  pinMode(_pin, INPUT);
  int degeri;
}

void SPot::deger()
{
  degeri = analogRead(_pin);
  return degeri;
}

void SPot::tur()
{
  
}

void SPot::aci()
{
  
}
