#include <stdio.h>

int main(void) {
  int notas[3], i;

  for (i = 0; i < 3; i++) {
    printf("Digite a nota do Aluno [%i]\n", i);
    scanf("%i", &notas[i]);
  }

  for (i = 0; i < 3; i++) {
    printf("A nota do Aluno [%i] é [%i]\n", i, notas[i]);
  }

  return 0;
}