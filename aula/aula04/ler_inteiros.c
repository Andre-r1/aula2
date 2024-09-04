#include <stdio.h>
int main() {
int numero = 0;
  printf("entre com um numero:");
  int deu_certo = scanf("%i", &numero); // sempre incluir int deu_certo no scanf.
  printf("voce digitou: %i\n", numero);
  printf("A leitura deu certo? %i\n", deu_certo);

  int coord_x = 0;
  int coord_y = 0;
  printf("entre com as coordenadas do ponto:");
  deu_certo = scanf("%i %i", &coord_x, &coord_y);
  printf("voce digitou: %i %i\n", coord_x, coord_y);
  printf("a leitura deu certo? %i\n", deu_certo);
  

return 0;
}