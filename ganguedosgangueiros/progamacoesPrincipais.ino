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
  ligarSensorCor();
  filtroPreto();
  if (leituraDireita() > preto){
    return true;
  }
  else{
    return false;
  }
}
bool pretoEsquerda(){
  ligarSensorCor();
  filtroPreto();
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
  ligarSensorCor();
  //Verde
  filtroVerde ();
  int valorVerde = leituraEsquerda();
  //Vermelho
  filtroVermelho ();
  int valorVermelho = leituraEsquerda();
  //Azul
  filtroAzul ();
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
  ligarSensorCor();
  //Verde
  filtroVerde ();
  int valorVerde = leituraDireita();
  //Vermelho
  filtroVermelho ();
  int valorVermelho = leituraDireita();
  //Azul
  filtroAzul ();
  int valorAzul = leituraDireita();
  //Comparação
  if (valorVerde < verde && valorVermelho > vermelho && valorAzul > azul){
    return true;
  }
  else {
    return false;
  }
}

