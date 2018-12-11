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
void virarDireita(){
}
void virarEsquerda(){  
}
void seguirFrente(){
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

