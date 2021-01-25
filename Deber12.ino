/*
 * CAP 7: APRENDIZAJE AUTOMATICO
 * PROGRAMA 31: K-NN SIMPLE
 * 
 */
 #include"datos.h"
 float datos_prueba [4]={66.00,24.10,24.29,1.0};
 
 String etiquetas[2]={"Ambiente","Exalacion"};
 int col;
 int fil=0;
 float potencia;
 float raiz;
 float etiqueta;
 float dist_menor=2500;
 String tipo="";
void setup() {
Serial.begin(9600);
for(;fil<87;fil++){
  for(col=0;col<4;col++){
    potencia=potencia+pow(matriz[fil][col]-datos_prueba[col],2);
  }
  raiz=sqrt(potencia);
  potencia=0;
  //almacenar la distancia menor
  if(raiz<dist_menor){
    dist_menor=raiz;
    etiqueta=matriz[fil][3];
  }
}
switch((int)etiqueta){
  case 1:
  tipo=etiquetas[0];
  break;
  case 2:
  tipo=etiquetas[1];
  break;
}
  Serial.println(tipo);
  if(etiqueta=datos_prueba[3])
  Serial.println("asignacion correcta");
  else
  Serial.println("asignacion incorrecta");
}

void loop() {

}
