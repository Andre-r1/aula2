#include <stdio.h>
int main() {
  int numero = 0;
printf("digite um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);
  printf("voce digitou: %i\n", numero);
  
  int coord_x = 0;
  int coord_y = 0;
  printf("Digite as coordenadas x e y: ");
  scanf("%i %i", &coord_x, &coord_y);
  printf("Você digitou: %i e %i\n", coord_x, coord_y);

  return 0;
}