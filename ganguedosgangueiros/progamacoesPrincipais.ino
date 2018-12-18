
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

//Desviar de obstáculos
void desviarObstaculo(){
  int delayGiro=100;
  int delay1=100;
  int delay2=100;
  if (temObstaculo ()){
    girarEsquerda();
    delay (delayGiro);
    seguirFrente();
    delay (delay1);
    girarDireita();
    delay (delayGiro);
    seguirFrente ();
    delay (delay2);
    girarDireita ();
    delay (delayGiro);
    seguirFrente();
    delay (delay1);
    girarEsquerda();
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

bool temObstaculo (){
  float distanciaCM = dist.Ranging (CM);
  if (distanciaCM < 15){

    return true;
  }
  else {
    return false;
  }
}

