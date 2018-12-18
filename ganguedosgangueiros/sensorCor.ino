//Ligar Sensor
void ligarSensorCor(){
  int s0=4;
  int s1=5;

  digitalWrite (s0, HIGH);
  digitalWrite (s1, HIGH);
}

//Filtros
void filtroPreto(){
  int s2=6;
  int s3=7;

  digitalWrite (s2, HIGH);
  digitalWrite (s3, LOW);
}
void filtroVerde(){
  int s2=6;
  int s3=7;

  digitalWrite (s2, HIGH);
  digitalWrite (s3, HIGH);

}
void filtroVermelho(){
  int s2=6;
  int s3=7;

  digitalWrite (s2, LOW);
  digitalWrite (s3, LOW);

}

void filtroAzul(){
  int s2=6;
  int s3=7;

  digitalWrite (s2, LOW);
  digitalWrite (s3, HIGH);
}

//Leitura dos valores dos sensores
int leituraDireita(){
  int out=3;
  if (digitalRead (out) == HIGH){
    return pulseIn (out, LOW);
  }
  else {
    return pulseIn (out, HIGH);
  }
}
int leituraEsquerda(){
  int out=2;
  if (digitalRead(out) == HIGH){
    return pulseIn (out, LOW);
  }
  else {
    return pulseIn (out, HIGH);
  }
}

