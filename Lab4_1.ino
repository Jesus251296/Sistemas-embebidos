#include <SoftwareSerial.h>
#define rx 3
#define tx 2
SoftwareSerial extraSerial= SoftwareSerial(rx, tx);
String dato;
int estatura;
void setup(){
  Serial.begin(9600);
  extraSerial.begin(9600);
  pinMode(rx,INPUT);
  pinMode(tx,OUTPUT);
}
void loop(){
  if(Serial.available()>0){
    dato=Serial.readString();
    estatura=dato.toInt();
    Serial.println(estatura);
    extraSerial.write(estatura);
  }
  
}
