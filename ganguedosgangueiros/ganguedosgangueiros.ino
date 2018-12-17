#include <Ultrasonic.h>
//Variáveis da calibração do sensor de cor
int preto = 0;
int verde = 0;
int vermelho = 0;
int azul = 0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  detectarIntercessoes ();
  seguirLinha ();
}
