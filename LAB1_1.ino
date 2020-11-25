
#include<LiquidCrystal.h>
#define COLS 16 
#define ROWS 2 
#define VELOCIDAD 300 
LiquidCrystal lcd (13,12,11,10,9,8);
int cont = 0;
int contc =0;
int contd =0;
int conte =0;
const int btn = 7;
int i;

void setup()
{
Serial.begin(9600);
lcd.begin(COLS, ROWS);
Serial.println("Ingrese clave");
delay(100); 
}
void loop(){
 if(Serial.available()) {
  String c=Serial.readString(); 
  Serial.println(c);
    if(c=="ca900813"||c=="aj881112"||c=="ja890109"){

       if(c=="ca900813"){
          String texto_fila = "BIEN-VENIDO Carlos Arias";
           int tam_texto=texto_fila.length();
          for(int i=16;i>=1;i--){
            lcd.clear();
            lcd.setCursor(i, 1);
            lcd.print(texto_fila);
            delay(VELOCIDAD);}
          for(int i=1; i<=tam_texto ; i++){
            String texto = texto_fila.substring(i-1);
            lcd.clear();
            lcd.setCursor(0, 1);
            lcd.print(texto);
            delay(VELOCIDAD);}
            contc++; 
       }
       
       if(c=="aj881112"){
         String texto_fila = "BIEN-VENIDO Andrés Juárez";
           int tam_texto=texto_fila.length();
          for(int i=16;i>=1;i--){
            lcd.clear();
            lcd.setCursor(i, 1);
            lcd.print(texto_fila);
            delay(VELOCIDAD);}
          for(int i=1; i<=tam_texto ; i++){
            String texto = texto_fila.substring(i-1);
            lcd.clear();
            lcd.setCursor(0, 1);
            lcd.print(texto);
            delay(VELOCIDAD);} 
            contd++;
       }

       if(c=="ja890109"){
         String texto_fila = "BIEN-VENIDO  Javier Andrada";
           int tam_texto=texto_fila.length();
          for(int i=16;i>=1;i--){
            lcd.clear();
            lcd.setCursor(i, 1);
            lcd.print(texto_fila);
            delay(VELOCIDAD);}
          for(int i=1; i<=tam_texto ; i++){
            String texto = texto_fila.substring(i-1);
            lcd.clear();
            lcd.setCursor(0, 1);
            lcd.print(texto);
            delay(VELOCIDAD);}
            conte++; 
       }
   delay(100);
    }
  else{
    String texto_fila = "Clave incorrecta";
    int tam_texto=texto_fila.length();
    for(int i=16;i>=1;i--){
    lcd.clear();
    lcd.setCursor(i, 1);
    lcd.print(texto_fila);
    delay(VELOCIDAD);}
   for(int i=1; i<=tam_texto ; i++){
    String texto = texto_fila.substring(i-1);
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print(texto);
    delay(VELOCIDAD);
  }
  }
 }
  if(digitalRead(btn)==HIGH){
    delay(300);
     String persona1=" Carlos Arias: ";
     String persona2=" Andrés Juárez: ";
     String persona3=" Javier Andrada: ";
     String texto="Personas ingresadas: ";
     String texto_fila = texto + persona1 + contc + persona2 +contd+ persona3 +conte;
    int tam_texto=texto_fila.length();
    for(int i=16;i>=1;i--){
    lcd.clear();
    lcd.setCursor(i, 2);
    lcd.print(texto_fila);
    delay(VELOCIDAD);}
   for(int i=1; i<=tam_texto ; i++){
    String texto = texto_fila.substring(i-1);
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print(texto);
    delay(VELOCIDAD);
    lcd.clear();
  }
 }
 

 }
