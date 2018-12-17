void ligarSensorCorDireita(){
  int s0;
  int s1;

  digitalWrite (s0, HIGH);
  digitalWrite (s1, HIGH);
}
void filtroPretoDireita(){
  int s2;
  int s3;

  digitalWrite (s2, HIGH);
  digitalWrite (s3, LOW);
}
void filtroVerdeDireita(){

}
void filtroVermelhoDireita(){

}
void filtroAzulDireita(){

}
int leituraDireita(){
  int out;
  if (digitalRead (out) == HIGH){
    return pulseIn (out, LOW);
  }
  else {
    return pulseIn (out, HIGH);
  }
}
