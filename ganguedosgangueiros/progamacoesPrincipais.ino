//Seguir Linha Preta
void seguirLinha () {
  if (pretoDireita()) {
    virarDireita();
  }
  else if (pretoEsquerda()) {
    virarEsquerda();
  }
  else {
    seguirFrente();
  }
}
void virarDireita(){
  motorDireitaParar();
  motorEsquerdaFrente();
}
void virarEsquerda(){
  motorEsquerdaParar();
  motorDireitaFrente();  
}
void seguirFrente(){
   motorEsquerdaFrente();
   motorDireitaFrente(); 
}
bool pretoDireita(){
  ligarSensorCorDireita();
  filtroPretoDireita();
  if (leituraDireita() > preto){
    return true;
  }
  else{
    return false;
  }
}
bool pretoEsquerda(){
  ligarSensorCorEsquerda();
  filtroPretoEsquerda();
  if (leituraEsquerda() > preto){
    return true;
  }
  else{
    return false;
  }
}
//Detectar intercessões
void detectarIntercessoes (){
  int delayGiro=100;
  if (verdeEsquerda ()&& verdeDireita()){
    girarEsquerda ();
    delay (delayGiro*2);
  }
  else if (verdeEsquerda()){
    girarEsquerda ();
    delay (delayGiro);
  }
  else if (verdeDireita()){
    girarDireita ();
    delay (delayGiro);
  }
}
void girarEsquerda (){
  motorDireitaFrente ();
  motorEsquerdaTras();
}
void girarDireita (){
  motorDireitaTras();
  motorEsquerdaFrente();
}
bool verdeEsquerda (){
  ligarSensorCorEsquerda();
  //Verde
  filtroVerdeEsquerda ();
  int valorVerde = leituraEsquerda();
  //Vermelho
  filtroVermelhoEsquerda ();
  int valorVermelho = leituraEsquerda();
  //Azul
  filtroAzulEsquerda ();
  int valorAzul = leituraEsquerda();
  //Comparação
  if (valorVerde < verde && valorVermelho > vermelho && valorAzul > azul){
    return true;
  }
  else {
    return false;
  }
}
bool verdeDireita (){
  ligarSensorCorDireita();
  //Verde
  filtroVerdeDireita ();
  int valorVerde = leituraDireita();
  //Vermelho
  filtroVermelhoDireita ();
  int valorVermelho = leituraDireita();
  //Azul
  filtroAzulDireita ();
  int valorAzul = leituraDireita();
  //Comparação
  if (valorVerde < verde && valorVermelho > vermelho && valorAzul > azul){
    return true;
  }
  else {
    return false;
  }
}

