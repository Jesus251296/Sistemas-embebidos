#include <Wire.h>
void setup() {
  Wire.begin();
  Serial.begin(9600);

}

void loop() {
   if(Serial.available()) {
   String c=Serial.readString();
   delay(2000);
   Wire.beginTransmission(4);
   Wire.write(c.c_str());
   Wire.endTransmission();
   Serial.println(c);
   
   Wire.requestFrom(4, 10); 
    while(Wire.available()){
   char b = Wire.read();/* read data received from slave */
    Serial.print(b);
    Serial.println();
    delay(1000);
   }
   }
}
