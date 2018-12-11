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
void motorDireitaParar(){
  int in1;
  int in2;

  digitalWrite (in1, HIGH);
  digitalWrite (in2, HIGH);
}
void motorDireitaFrente(){
  int in1;
  int in2;

  digitalWrite (in1, LOW);
  digitalWrite (in2, HIGH);
}
void motorEsquerdaParar(){
  int in3;
  int in4;

  digitalWrite (in3, HIGH);
  digitalWrite (in4, HIGH);
}
void motorEsquerdaFrente(){
  int in3;
  int in4;

  digitalWrite (in3, LOW);
  digitalWrite (in4, HIGH);
}
