
#include"datos.h"
#include <DHT.h>
#define col 4
#define fil 204
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
int j=0; 
int i=0; 
int j2=0; 
int i2=0; 
float potencia; 
float raiz;  
float dist_menor=3000; 
int etiqueta;


void setup() {
Serial.begin(9600);
dht.begin();
 
}

void loop() { 
  delay(1000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float hic = dht.computeHeatIndex(t, h, false);
 
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
  
    Serial.write(etiqueta);
}
