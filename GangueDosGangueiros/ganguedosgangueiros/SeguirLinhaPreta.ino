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
  return true;
}
bool pretoEsquerda(){
  return false;
}
void virarDireita(){
}
void virarEsquerda(){
  
}
void seguirFrente(){

}

