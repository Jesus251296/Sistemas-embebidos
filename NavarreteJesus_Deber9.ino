#include<avr/wdt.h>

int tiempo=0;
int aux=0;
String cont;
uint8_t Array[8];

void setup(){
Serial.begin(9600);
Serial.println("SETUP");
wdt_enable(Array);
}
void loop(){
  tiempo=analogRead(0);
  aux=(tiempo*60/1023);
  Serial.println(aux);
  delay(1000);
  cont=("WDTO_",aux ,"S");
  cont.toCharArray(Array,8);
}
