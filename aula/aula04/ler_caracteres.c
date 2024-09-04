#include <stdio.h>
int main(){
  char tecla = '\0'; // caractere nulo.
printf("digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar();
  printf("voce digitou: %c\n", tecla);
  printf("digite outra tecla: ");
  deu_certo = scanf("%c", &tecla);
  printf("voce digitou: %c\n", tecla);// buffer do teclado, sempre adicionar o getchar(); quando for caracter.
  getchar();
  char nome[31];
  printf("entre com um nome: ");
  deu_certo = scanf("%[^\n]s", nome); // quando se usa %s caracter não se usa o &.
  // para se ler o espaço entre o nome precisamos adicionar no scanf "%[^\n]s".
  printf("voce digitou: %s\n", nome);
  
  
  return 0;
  
}