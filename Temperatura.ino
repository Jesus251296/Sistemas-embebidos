#include <DHT.h>
#include <MsTimer2.h>  
#include <avr/power.h> 
#include <avr/sleep.h>  
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

int tiempo=3; 
int cont=0; 
int j2=0; 
int i2=0; 
float h; 
float t;
float hic;
void setup() {
  Serial.begin(9600);
  MsTimer2::set(1000, reloj);
  power_adc_disable(); 
  dht.begin();
   MsTimer2::start();
}

void loop() {
 h = dht.readHumidity();
  t = dht.readTemperature();
  hic = dht.computeHeatIndex(t, h, false);
  float datos_prueba[3]={h,t,hic};
    for(j2=0;j2<fil;j2++){ 
     for(i2=0;i2<col-1;i2++){ 
       potencia=potencia+pow(matriz[j2][i2]-datos_prueba[i2],2);
      }
      raiz=sqrt(potencia); 
      potencia=0; 
      if(raiz<dist_menor){ 
        dist_menor=raiz; 
        etiqueta=matriz[j2][3]; 
       }
    }
}
void reloj(){  
   cont++; // cuenta cada segundo
   if(cont==tiempo){ 
       power_adc_enable(); 
       delay(10);
         float h = dht.readHumidity();
         float t = dht.readTemperature();
         float hic = dht.computeHeatIndex(t, h, false);
         Serial.println(String(h)+String(",")+String(t)+String(",")+String(hic));
       cont=0; 
    }
}
