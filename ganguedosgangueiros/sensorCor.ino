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
void ligarSensorCorDireita(){
}
void filtroPretoDireita(){
}
void ligarSensorCorEsquerda(){
}
void filtroPretoEsquerda(){
}
int leituraDireita(){
}
int leituraEsquerda(){
}

