#include<avr/power.h>
#include<avr/sleep.h>
#include<avr/wdt.h>
int dato;
int on=0;
void(* resetFunc) (void) = 0; // esta es la funcion
//void on(void);
void setup() {
   Serial.begin(9600);
   Serial.println("SETUP");
   set_sleep_mode(SLEEP_MODE_STANDBY);
   sleep_enable();
   wdt_enable(WDTO_4S); 
   sleep_disable();
}
void loop() {
  dato=analogRead(0);
  Serial.println(dato);
  Serial.println("Sleep mode");
  delay(20);
  sleep_mode(); 
  Serial.println("Wake up");
  delay(1000);
  }

 void encender (){
    resetFunc();  
 }
