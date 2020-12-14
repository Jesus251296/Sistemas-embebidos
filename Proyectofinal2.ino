#define tam_sig 13
int sensorReading; 
void plot_signal(void);
int Filter_Value;
double Level [tam_sig];

void setup(){
 Serial.begin(9600);
}

void loop() {
  sensorReading = analogRead(A0);
 for(int i=0; i<tam_sig; i++){
  Level[i]= sensorReading;}
  plot_signal();
  delay(100);
}

int Filter () {
int i, j;
int filter_temp, filter_sum = 0;
for (j = 0; j <tam_sig - 1; j++) {
  for (i =0; i <tam_sig-1-j; i++) {
    if (Level [i]> Level  [i + 1]) {
      filter_temp = Level [i];
      Level [i] = Level [i + 1];
      Level [i + 1] = filter_temp;
}
}
}
for(i = 1; i <tam_sig - 1; i++){
filter_sum = Level [i];
return filter_sum ;
}
}

void plot_signal(void){
  int i;
  for(i=0;i<tam_sig;i++){
    Serial.print(Level[i]+5);
    Serial.print(",");
    Filter_Value = Filter();
    Serial.println(Filter_Value);
    delay(5);
  }
}
