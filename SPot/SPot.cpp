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
  int acid;
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
  if (deger() == 0) {
    acid = 0;
  } else {
    acid = map(deger(), 0, 1023, 0, 270);
  }
  return acid;
}
