  int y=0;
  int x=0;
void setup(){
 size(900,900);
 background(255,255,255);
}
void draw (){
  //background(125,132,252);
  fill(0);
  fill(0);
  ellipse(x,y,40,40);
}
void keyPressed(){
 switch(keyCode){
  case 38:
  background(255,255,255);
  y=y-5;
  break;
  case 40:
  background(255,255,255);
  y=y+5;
  break;
  case 37:
  background(255,255,255);
  x=x-5;
  break;
  case 39:
  background(255,255,255);
  x=x+5;
  break;
  
 }
}
