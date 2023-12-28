#include "SPot.h" //kütüphaneyi dahil etmek için

SPot pot(A0); //A0 pinine bağlı bir potansiyometre nesnesi oluşturmak için

void setup()
{
  pot.begin(); //potansiyometreyi başlatmak için
}

void loop()
{
  int deger = pot.deger(); //potansiyometreden gelen değeri almak için
  int tur = pot.tur(); //potansiyometrenin kaç tur döndüğünü almak için
  int aci = pot.aci(); //potansiyometrenin değerini açıya dönüştürmek için

  Serial.print("Deger: "); //seri monitöre değeri yazmak için
  Serial.println(deger);
  Serial.print("Tur: "); //seri monitöre tur sayısını yazmak için
  Serial.println(tur);
  Serial.print("Aci: "); //seri monitöre açıyı yazmak için
  Serial.println(aci);
  Serial.println(); //boş bir satır yazmak için

  delay(100); //100 ms beklemek için
}
