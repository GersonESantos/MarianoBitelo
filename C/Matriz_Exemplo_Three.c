#include <stdio.h>

int main(void) {
  float matriz[3][3];
  int notas, l, c;

  // matriz de 3 linhas e 3 colunas

  printf("\nDigite valor para os elementos da matriz\n\n");

  for (l = 0; l < 3; l++)
    for (c = 0; c < 3; c++) {
      printf("\nElemento[%i][%i] = ", l, c);
      scanf("%f", &matriz[l][c]);
    }

  printf("\n\n******************* Saida de Dados ********************* \n\n");

  for (l = 0; l < 3; l++)
    for (c = 0; c < 3; c++) {
      printf("\nElemento[%i][%i] = %f\n", l, c, matriz[l][c]);
    }

  return (0);
}