void motorDireitaParar(){
  int in1 = 8;
  int in2 = 9;

  digitalWrite (in1, HIGH);
  digitalWrite (in2, HIGH);
}
void motorDireitaFrente(){
  int in1 = 8;
  int in2 = 9;

  digitalWrite (in1, LOW);
  digitalWrite (in2, HIGH);
}
void motorEsquerdaParar(){
  int in3 = 10;
  int in4 = 11;

  digitalWrite (in3, HIGH);
  digitalWrite (in4, HIGH);
}
void motorEsquerdaFrente(){
  int in3 = 10;
  int in4 = 11;

  digitalWrite (in3, LOW);
  digitalWrite (in4, HIGH);
}
