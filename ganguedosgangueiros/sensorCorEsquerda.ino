void ligarSensorCorEsquerda(){
  int s0;
  int s1;

  digitalWrite (s0, HIGH);
  digitalWrite (s1, HIGH);
}
void filtroPretoEsquerda(){
  int s2;
  int s3;

  digitalWrite (s2, HIGH);
  digitalWrite (s3, LOW);
}
void filtroVerdeEsquerda(){
  int s2;
  int s3;

  digitalWrite (s2, HIGH);
  digitalWrite (s3, HIGH);
}
void filtroVermelhoEsquerda(){
  int s2;
  int s3;

  digitalWrite (s2, LOW);
  digitalWrite (s3, LOW);
}
void filtroAzulEsquerda(){
  int s2;
  int s3;

  digitalWrite (s2, LOW);
  digitalWrite (s3, HIGH);
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

