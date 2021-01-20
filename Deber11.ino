
int matriz[14][2]={
{170,67},
{180,80},
{170,65},
{178,75},
{160,55},
{163,60},
{165,63},
{170,70},
{164,62},
{176,77},
{164,60},
{170,76},
{170,56},
{168,60},
};
 int col=0;
 int fil=0;
 int Ex=0;
 int Ey=0;
 long int Exy=0;
 long int Ex2=0;
 long int Ex_2=0;
 int n=14;
 float Bo;
 float a;
 String dato;
 int estatura;
 float peso;
 int aux;
 int aux2;
 int aux3;
 int aux4;

 void setup(){
  Serial.begin(9600);
  for(;fil<n;fil++){
    Ex=Ex+matriz[fil][0];
    Ey=Ey+log(matriz[fil][1]);
    Exy=Exy+(matriz[fil][0]*log(matriz[fil][1]));
    Ex2=Ex2+pow(matriz[fil][0],2);
  }

  Ex_2=pow(Ex,2);
  aux=(n*Exy)-(Ex*Ey);
  aux2=n*Ex2-Ex_2;
  Bo=float(aux)/float(aux2);
  aux3=float((Ey-Bo*Ex)/14);
  a=exp(aux3);
  Serial.println((Ex)+String("*")+String(Ey)+String("*")+String(Exy)+String("*")+String(Ex2)+String("*")+String(Ex_2)+String("*")+String(a)+String("*")+String(Bo));
  Serial.println("El modelo es: ");
  Serial.println(String("y= ")+String(a)+String("*")+String("e^")+String(Bo)+String("x"));
  Serial.println("Ingrese su estatura:");
 }
 void loop(){
  if(Serial.available()>0){
    dato=Serial.readString();
    estatura=dato.toInt();
    peso=a*exp(Bo*estatura);
    Serial.println(String("Su peso es: ")+String(peso)+String("Kg"));
  }
 }
