#include <Ultrasonic.h>

Ultrasonic dist (12,13);

//Variáveis da calibração do sensor de cor
int preto = 0;
int verde = 0;
int vermelho = 0;
int azul = 0;

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

  //Sensor Ultrassom
  pinMode (12, INPUT);
  pinMode (13, INPUT);

  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  desviarObstaculo();
  detectarIntercessoes ();
  seguirLinha ();
}


