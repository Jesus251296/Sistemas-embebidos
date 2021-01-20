import processing.serial.*;

int[][]matriz={
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
float a=152.4;
float b=5;
float c=550;
 int col=0;
 int fil=0;
 int Ex=0;
 int Ey=0;
 int Exy=0;
 float Ex2=0;
 int Ex_2=0;
 int n=14;
 float Bo;
 float m;
 int dato;
 int estatura;
 float peso;
 float m1;
 int i;
 int j;
 Serial port;
 void setup(){
   size(900,600);
   background(255);
   port= new Serial(this,"COM10",9600);
  for(;fil<n;fil++){
    Ex=Ex+matriz[fil][0];
    Ey=Ey+(matriz[fil][1]);
    Exy=Exy+(matriz[fil][0]*(matriz[fil][1]));
    Ex2=Ex2+pow(matriz[fil][0],2);
  }
  float Ex_2=pow(Ex,2);
  Bo=((Ex2*Ey)-(Ex*Exy))/((n*Ex2-Ex_2));
  m1=(n*Exy)-(Ex*Ey);
  m=(m1)/((n*Ex2-Ex_2));
  }
  void draw(){
    stroke(#C1BFBF);
    strokeWeight(1);
    for(i=50;i<600;i=i+50){
     line(50,i,850,i); 
    }
    for(i=50;i<900;i=i+100){
     line(i,50,i,550); 
    }
    for(i=50;i<600;i=i+50){
     fill(0);
     text(((i-550)*(-1))/5,15,i);
    }
    for(i=50;i<900;i=i+100){
     fill(0);
     text((((i-50)/20))+155,i,585);
    }
    for(fil=0;fil<n;fil++){
      stroke(0);
      fill(#D6C313);
      ellipse((matriz[fil][0]-a)*20,c-matriz[fil][1]*b,10,10);
    }
     line((160-a)*20,c-55*b,(180-a)*20,c-80*b);
     stroke(0);
     fill(#14E04C);
     ellipse((estatura-a)*23,c-peso*b,10,10);
  
  }
  
  void serialEvent(Serial port){
    dato=port.read();
    estatura=int(dato);
    peso=m*estatura+Bo;
    println(estatura);
  }
 
