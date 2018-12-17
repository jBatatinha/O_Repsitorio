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

}
void filtroVermelhoEsquerda(){

}
void filtroAzulEsquerda(){

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

