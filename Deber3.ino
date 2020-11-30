String m1=("La muralla China se ve desde el espacio?");
String m2=("La piel es el organo más grande del cuerpo humano?");
String m3=("Si cortas una lombriz de tierra por la mitad, las dos partes pueden regenerar su cuerpo?");
String m4=("Una tostada con mantequilla lanzada al aire cae por el lado de la mantequilla?");
String m5=("Si tiras un céntimo desde lo alto de un rascacielos, puedes atravesarle el cráneo a alguien?");
String m6=("Todos los insectos tienen seis patas.?");
String m7=("Mark Zuckerberg es daltónico. El fondo de Facebook es azul porque es el color que puede distinguir mejor?");
String m8=("Comemos en promedio 4 insectos (no arañas) mientras dormimos cada año?");
String r1=("si");
String r2=("no");
String respuestav;
String respuestaj;
String pregunta;
int i=0;
int r=0;
int variable = 0;
int variableant [8];
void setup() {
  Serial.begin(9600);
  Serial.println("Bienvenido");
}

void loop() {
 
  while ( i<5){
  i++;
  variable =random(1,8);
 
  switch (variable){
    case 1:
    pregunta = m1;
    respuestav=r2;
    break;

    case 2:
    pregunta = m2;
    respuestav=r1;
    break;
    
    case 3:
    pregunta = m3;
    respuestav=r2;
    break;

    case 4:
    pregunta = m4;
    respuestav=r2;
    break;

    case 5:
    pregunta = m5;
    respuestav=r2;
    break;

    case 6:
    pregunta = m6;
    respuestav=r1;
    break;

    case 7:
    pregunta = m7;
    respuestav=r1;
    break;

    case 8:
    pregunta = m8;
    respuestav=r2;
    break;   
  }
  Serial.println(pregunta);
  delay(5000);
  respuestaj = Serial.readString();
  Serial.println(respuestaj);
  if (respuestav==respuestaj){
    r++;
    Serial.println(r);
  }
  else{
    Serial.println("error");
  }
  delay(1000);
  
}
}
