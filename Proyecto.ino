
#include"datos.h"
#include"datosprueba.h"

#define col 4
#define fil 201

#define filp 47

int j=0; 
int i=0; 
int j2=0; 
int i2=0; 
float potencia; 
float raiz;  
float dist_menor=3000; 
float etiqueta;
float datos_prueba[4];
int matrizc[3][3];

void setup() {
Serial.begin(9600);
for(j=0;j<filp;j++){ 
     for(i=0;i<col;i++){ 
      datos_prueba[i]=matrizp[j][i];
     }
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
  
 
    if(etiqueta==1&&datos_prueba[3]==1){ 
      matrizc[0][0]++;
    }
    if(etiqueta==2&&datos_prueba[3]==2){ 
      matrizc[1][1]++;
    }
    if(etiqueta==3&&datos_prueba[3]==3){ 
      matrizc[2][2]++;
    }
    if(etiqueta==1&&datos_prueba[3]==2){ 
      matrizc[0][1]++;
    }
    if(etiqueta==1&&datos_prueba[3]==3){ 
      matrizc[0][2]++;
    }
    if(etiqueta==2&&datos_prueba[3]==1){ 
      matrizc[1][0]++;
    }
    if(etiqueta==2&&datos_prueba[3]==3){ 
      matrizc[1][2]++;
    }
    if(etiqueta==3&&datos_prueba[3]==1){ 
      matrizc[2][0]++;
    }
    if(etiqueta==3&&datos_prueba[3]==2){ 
      matrizc[2][1]++;
    }
  }
  for(j2=0;j2<2;j2++){
    for(i2=0;i2<2;i2++){
      Serial.println(matrizc[j2][i2]);
    }
  }
}

void loop() {   
  
}
