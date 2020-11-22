const int led1 = 8;
const int led2 = 9;
const int led3 = 10;
const int led4 = 11;
const int led5 = 12;
const int led6 = 13;
const int sw1 = 4;
const int sw2 = 5;
const int sw3 = 6;
const int sw4 = 7;
int j=0;
void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
 pinMode(led5,OUTPUT);
 pinMode(led6,OUTPUT);
 pinMode(sw1,INPUT);
 pinMode(sw2,INPUT);
 pinMode(sw3,INPUT);
 pinMode(sw4,INPUT);

}

void loop() {
 if(digitalRead(sw1)==HIGH){
  while (j<10){
    j++;
    digitalWrite (led2,HIGH);
    digitalWrite (led4,HIGH);
    digitalWrite (led6,HIGH);
    delay(500);
    digitalWrite(led2,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led6,LOW);
    delay (500);
  }
  }
  if(digitalRead(sw2)==HIGH){
  while (j<10){
    j++;
    digitalWrite (led1,HIGH);
    digitalWrite (led3,HIGH);
    digitalWrite (led5,HIGH);
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led5,LOW);
    delay (500);
  }
  }
  if(digitalRead(sw3)==HIGH){
    digitalWrite (led2,HIGH);
    delay(500);
    digitalWrite (led4,HIGH);
    delay(500);
    digitalWrite (led6,HIGH);
    delay(500);
    digitalWrite(led2,LOW);
    delay(500);
    digitalWrite(led4,LOW);
    delay(500);
    digitalWrite(led6,LOW);
    delay (500);
    digitalWrite (led1,HIGH);
    delay(500);
    digitalWrite (led3,HIGH);
    delay(500);
    digitalWrite (led5,HIGH);
    delay(500);
    digitalWrite(led1,LOW);
    delay(500);
    digitalWrite(led3,LOW);
    delay(500);
    digitalWrite(led5,LOW);
    delay (500);
  
  }
  if(digitalRead(sw4)==HIGH){
    digitalWrite (led2,HIGH);
    digitalWrite (led4,HIGH);
    digitalWrite (led6,HIGH);
    delay(500);
    digitalWrite(led2,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led6,LOW);
    delay (500);
    digitalWrite (led1,HIGH);
    delay(500);
    digitalWrite (led3,HIGH);
    delay(500);
    digitalWrite (led5,HIGH);
    delay(500);
    digitalWrite(led1,LOW);
    delay(500);
    digitalWrite(led3,LOW);
    delay(500);
    digitalWrite(led5,LOW);
    delay (500);
  
  }


}
