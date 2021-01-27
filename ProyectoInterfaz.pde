import processing.serial.*;
Serial port;
 int i;
 int j;
 int estado;
 String c;
 int dato;
 int s; 
 int m; 
 int h;
 PImage img1;
 PImage img2;
 PImage img3;
 PImage img;
 void setup(){
   size(900,600);
   port= new Serial(this,"COM5",9600);
 
     img=loadImage("sol.jpg");
     img1=loadImage("diasoleado.jpg"); 
     img2=loadImage("noche.jpg");
     img3=loadImage("nochefria.jpg");

 }
 void draw(){
    background(255);
    int s = second(); 
    int m = minute(); 
    int h = hour(); 
    fill(255,0,0);
    textSize(20);
    text(h + ":" + m + ":" + s, 800, 30);
    
    if(h<18&&estado==1){
     image(img,10,10,100,100);
     c="Día soleado";
     textSize(30);
     fill(0);
     text(c,200,300);
    }
    if(h<18&&estado==2){
    image(img1,10,10,200,200);
     c="Día frío";
     textSize(80);
     fill(0);
     text(c,200,300);
    }
    if(18<h&&estado==1){
     image(img2,10,10,200,200);
     c="Noche cálida";
     textSize(80);
     fill(0);
     text(c,200,300);
    }
    if(18<h&&estado==2){
     image(img3,10,10,200,200);
     c="Noche fría";
     textSize(80);
     fill(0);
     text(c,200,300);
    }

  
  
  }
  
  void serialEvent(Serial port){
    dato=port.read();
    estado=int(dato);
    println(estado);
  
  }
