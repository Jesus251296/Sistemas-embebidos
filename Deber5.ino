int on=0; // int0
 int velocidad;
 String dato;
void setup(){
   Serial.begin(9600); //activación de cx serial
   attachInterrupt(0,activacion,LOW); // interrupt 0 habilitada
}

void loop(){
  if(on==2){ // condición de juego
    if(Serial.available()>0){
      dato= Serial.readString();
      delay (1000); 
      Serial.println(dato);
      velocidad= dato.toInt();
      analogWrite(6,velocidad);
    }   
  }
}

void activacion (){
  switch(on){ // opciones de boton 
      case 0:
        Serial.println("Inicio de Sistema");
        on++;
      break;
      case 1:
        Serial.println("Inicio de Juego");
        Serial.println("Ingrese un numero entre 0 y 255");
        on++;
      break;
      case 2:
        Serial.println("Fin de juego");
        analogWrite(6,0);
        on=0;
      break;
    }
}
