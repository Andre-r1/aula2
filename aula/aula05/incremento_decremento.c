#include <stdio.h>

int main(){
  //entrada
  int numero;

  printf("entre com um numero inteiro:");
  int deu_certo = scanf("%i", &numero);

  // processamento
  // numero = numero +1;
  int incremento = numero;
  int pos_incremento = incremento++;
  int pre_incremento = ++incremento;
  
  
  
  // numero = numero - 1;
  int decremento = numero;
  int pos_decremento = decremento--;
  int pre_decremento = --decremento;
//saida
  printf("o incremento do numero %i é %i\n", numero, incremento);
    printf("o decremento do numero %i é %i\n", numero, decremento);  printf("o pre_incremento é %i, e o pos_incremento é %i\n", pre_incremento, pos_incremento);
  printf("o pre_decremento é %i, e o pos_decremento é %i\n", pre_decremento, pos_decremento);

  
  return 0;
  
}