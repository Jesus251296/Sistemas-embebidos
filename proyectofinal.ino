#define tam_sig 13
#define tam_imp 13
int sensorReading;       
extern double Impulse_response[tam_imp];
double Level [tam_sig];

double output[tam_sig+tam_imp];
void convolution(double *sig_in, double *sig_out, double *imp, int sig_tam, int imp_tam);
void plot_signal(void);

void setup() {
  Serial.begin(9600); 
}

void loop() {
  sensorReading = analogRead(A0);
  for(int i=0; i<tam_sig; i++){
  Level[i]= sensorReading;}
  convolution((double *)&Level,(double *)&output[0],(double *)&Impulse_response[0],
 (int) tam_sig, (int) tam_imp);
  plot_signal();
  delay(100);
 
  }

  
void convolution(double *sig_in, double *sig_out, double *imp, int sig_tam, int imp_tam){
  int i,j;
  for(i=0;i<sig_tam+imp_tam;i++){
    sig_out[i]=0;
  }
  for (i=0;i<sig_tam; i++){
    for(j=0;j<imp_tam;j++){
      sig_out[i+j]=sig_out[i+j]+sig_in[i]*imp[j];
    }
  }
}

void plot_signal(void){
  int i;
  for(i=0;i<tam_sig;i++){
    Serial.print(Level[i]+5);
    Serial.print(",");
    Serial.println(output[i]);
    delay(5);
    
  }
}
