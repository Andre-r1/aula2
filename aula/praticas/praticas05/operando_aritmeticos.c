#include <sdio.h>
int main(){
  int numero1;
  int numero2;
  int soma = numero1 + numero2;
  printf("digite um número inteiro: ");
  scanf("%i", numero1);
  printf("digite outro número inteiro:" );
  scanf("%i", numero2);
  printf("digite um número fluutante:" );
  scanf("%f", &numero3);
  printf("A soma de %i com %i é igual a %i\n", numero1, numero2, soma);
  return 0;
}