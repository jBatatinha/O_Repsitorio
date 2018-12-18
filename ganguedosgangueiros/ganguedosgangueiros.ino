#include <Ultrasonic.h>
//Variáveis da calibração do sensor de cor
int preto = 0;

void setup() {
  // put your setup code here, to run once:
  //Motores
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);

  //Velocidade do motor
    //Esquerda
    pinMode (41, OUTPUT);
    analogWrite (41, 255);
    //Direita
    pinMode (40, OUTPUT);
    analogWrite (40, 255);

  //Sensor de cor
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (2, INPUT);
  pinMode (3, INPUT);

  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  seguirLinha ();
}


