#ifndef Spot_h
#define Spot_h

#include "Arduino.h"

class SPot
{
public:
    SPot(int pin);
    void begin();
    void deger();
    void aci();
    void tur();
private:
    int _pin;
};

#endif
