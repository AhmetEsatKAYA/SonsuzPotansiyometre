#include "SPot.h"

SPot pot(A0); 

void setup()
{
  pot.begin(); 
}

void loop()
{
  int deger = pot.deger(); 
  int tur = pot.tur(); 
  int aci = pot.aci();

  Serial.print("Deger: ");
  Serial.println(deger);
  Serial.print("Tur: "); 
  Serial.println(tur);
  Serial.print("Aci: ");
  Serial.println(aci);
  Serial.println();

  delay(100); 
}
