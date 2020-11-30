#include <Wire.h>
void setup() {
  Wire.begin(4);
  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent); 
  Serial.begin(9600);

}

void loop() {
  delay(100);
  

}
void receiveEvent(int howmany){
  while (Wire.available()){
      char c=Wire.read();
      if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        switch (c){
          case'a':
          c='@';
          break;
          
          case'e':
          c='#';
          break;
          
          case'i':
          c='!';
          break;
          
          case 'o':
          c='*';
          break;
          
          case 'u':
          c='$';
          break;
        }
      }
  Serial.print(c);

  

}
}
void requestEvent() {
Wire.write("c"); 
}
