/*
 * CAP II: PUERTOS DIGITALES
 * CODIGO5: MANEJO DE DISPALY
 * OBJETIVO: Representar los numeros del 0 al 9
 */
 const int A=8;
 const int B=9;
 const int C=10;
 const int D=11;
 const int btn=7;
 const int unidades= 12;
 const int decenas=13;
 int V[25];
int uni;
int dec;
 int cont;

 void setup (){
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(btn,INPUT);
  pinMode(unidades,OUTPUT);
  pinMode(decenas,OUTPUT);
 }
void loop(){
  if (digitalRead(btn)==HIGH){
    delay(300);
    for (int n=1; n<99; n++){
    bool primo = true;
    for (int i=2; i<n; i++){
      if (n%i == 0){
        primo = false;
      }
    }
    if (primo){
      for (int j; j<26;j++){
        n= V[j];
        V[j]= cont;
        if(V[j]<10){
           uni=V[j];}
        else{
           dec=V[j]/10;
           uni=V[j]-dec*10;
          }
      }  
    }
  }
  delay(100000);
    
  }
  digitalWrite(unidades,HIGH);
  digitalWrite(decenas,LOW);
  contador(uni);
  delay(100);
  digitalWrite(unidades,LOW);
  digitalWrite(decenas,HIGH);
  contador(dec);
  delay(100);
}
void contador(int i){
  
    delay(300);
    switch (i){
      case 0:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      break;
      case 1:
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      break;
      case 2:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      break;
      case 3:
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      break;
      case 4:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      break;
      case 5:
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      break;
      case 6:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      break;
      case 7:
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      break;
      case 8:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      break;
      case 9:
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      break;
    }
  
  
}
