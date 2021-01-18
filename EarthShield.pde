import processing.serial.*;
float velocidad=5.0;
float y=0.0;
float x=0.0;
float x1=0.0;
int contador=0;
String dato;
PImage img;
float r=0;
float g=0;
float b=0;
int y2=0;
float x2=0;
Serial port;
 void setup(){
 img=loadImage("escudo.png");
 size(1600,1000); 
  background(0);
 port=new Serial(this,"COM3",9600);
 }
 void draw(){
 background(0);
 r=random(0,255);
 g=random(0,255);
 b=random(0,255);
 textSize(30);
 fill(250);
 text("Score: "+contador,600,100);
 image(img,x1,900,200,100);
 if(y2<1000){
 y2=y2+70;
 ellipse(x2,y2,10,10);
 }
 else{
 y2=0;
 x2=random(0,1600);
 }
 if(y<1000){  
 fill(r,g,b);
 stroke(r,g,b);
 y=y+velocidad;
 ellipse(x,y,50,50);
 }
 else{
  y=0; 
  x=random(0,1600);
  if(velocidad<50)
  velocidad=velocidad+0.5;
 }
 if(x1<x&&x<x1+200&&900<y){
   contador++;
 }
 }
 
 void serialEvent(Serial port){
   dato=port.readString();
   println(dato);
   switch(dato){
   case "A":
   x1=x1+100;
   break;
   case"B":
   x1=x1-100;
   break;
   }
   
 }
