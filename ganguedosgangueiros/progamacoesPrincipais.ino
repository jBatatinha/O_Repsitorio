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
  
}
bool verdeDireita (){

}

