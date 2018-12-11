//Seguir Linha
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
  
}

