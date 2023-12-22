#ifndef Spot_h
#define Spot_h

#include "Arduino.h"

class SPot
{
public:
    SPot(int pin);
    void begin();
    void yol();
    void aci();
private:
    int _pin;
};

#endif
