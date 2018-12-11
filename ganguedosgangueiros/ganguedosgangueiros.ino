#include <Ultrasonic.h>

Ultrasonic dist (0,1);

//Variáveis da calibração do sensor de cor
int preto = 0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  desviarObstaculo();
  seguirLinha ();
}


