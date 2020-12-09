
 #include <MsTimer2.h>
 #include <LiquidCrystal.h>

 LiquidCrystal lcd (13,12,11,10,9,8);
 int buz = 7;
 int segundos=0;
 int minutos=0;
 int horas=0;
 String alarmah;
 String alarmam;
 String d1;
 int y;
 int x;
 
void setup() {
  pinMode(buz,OUTPUT);
  Serial.begin(9600);
  lcd.begin (16,2);
  MsTimer2::set(1000,reloj);
  MsTimer2::start();
  Serial.println("Ingrese la hora hh:mm");
}

void loop() {
  if (Serial.available()>0){
    d1= Serial.readString();
    Serial.println(d1);
    char vector [5];
    d1.toCharArray(vector,5);
    alarmah=(vector[0]*10)+(vector[1]);
    alarmam=(vector[3]*10)+(vector[4]);
    x= alarmah.toInt();
    y= alarmam.toInt();
  }
  if (horas==x&& minutos==y){
    digitalWrite(buz,HIGH);
  }
}

void reloj(){
  
  if (segundos<60){
    segundos++;
  }
  
  else{
    segundos=0;
    if (minutos<60){
      minutos++;
    }
    else{
      minutos=0;
      if(horas<24){
        horas++;
 
      }
      else{
        horas=0;
      }
    }
  }
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(String(horas)+String(":")+String(minutos)+String(":")+String(segundos));
  
}
