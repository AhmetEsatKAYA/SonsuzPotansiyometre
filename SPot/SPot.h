#ifndef SPot_h 
#define SPot_h

#include <Arduino.h>

class SPot 
{
  public: 
    SPot(int pin);
    void begin(); 
    int deger();
    int tur(); 
    int aci();
  private: 
    int _pin; 
    int _tur;
    int _onceki; 
};

#endif
