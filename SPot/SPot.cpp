#include "Arduino.h"
#include "SPot.h"

SPot::SPot(int pin)
{
  _pin = pin; 
  _tur = 0; 
  _onceki = 0;
}

void SPot::begin()
{
  pinMode(_pin, INPUT); 
  Serial.begin(9600);
}

int SPot::deger() 
{
  int deger = analogRead(_pin);
  deger = deger / 10; 
  return deger; 
}

int SPot::tur() 
{
  int deger = analogRead(_pin); 
  if (deger == 0 || deger == 1023)
  {
    if (deger != _onceki)
    {
      _tur++;
      _onceki = deger;
    }
  }
  return _tur; 
}

int SPot::aci() 
{
  int deger = analogRead(_pin); 
  int aci = map(deger, 0, 1023, 0, 360); 
  return aci;
}
