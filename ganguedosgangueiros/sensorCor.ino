//Ligar Sensor
void ligarSensorCor(){
  int s0;
  int s1;

  digitalWrite (s0, HIGH);
  digitalWrite (s1, HIGH);
}

//Filtros
void filtroPreto(){
  int s2;
  int s3;

  digitalWrite (s2, HIGH);
  digitalWrite (s3, LOW);
}

//Leitura dos valores dos sensores
int leituraDireita(){
  int out;
  if (digitalRead (out) == HIGH){
    return pulseIn (out, LOW);
  }
  else {
    return pulseIn (out, HIGH);
  }
}
int leituraEsquerda(){
  int out;
  if (digitalRead(out) == HIGH){
    return pulseIn (out, LOW);
  }
  else {
    return pulseIn (out, HIGH);
  }
}
