
#include<EEPROM.h>


int clave = 4563;
int ingresada;
String conversor;
String conversor2;
int nueva;

void setup() {
 Serial.begin(9600);
 EEPROM.write(0,clave); 
 
}
void loop() {
 if (Serial.available()>0){
  conversor=Serial.readString();
  ingresada=conversor.toInt();
  if(ingresada==clave){
    Serial.println("Ingrese nueva clave");
    conversor2=Serial.readString();
    nueva=conversor2.toInt();
    EEPROM.update(0,nueva);
  }
 }
}
