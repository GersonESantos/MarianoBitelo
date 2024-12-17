#include <stdio.h>
#include <stdlib.h>
#define NOME_ARQUIVO "meu_texto.txt"
#define TAM_STR 150

int main(void) {
  char str1[100];
  char str2[150];
  char str3[90];
  FILE *arq;
  printf("bem_vindo ao nosso programa que le TXT:\n");

  if (!(arq = fopen(NOME_ARQUIVO, "r"))) {
    printf("\nErro ao abrir o arquivo %s\n", NOME_ARQUIVO);
    exit(1);
  }

  fgets(str1, TAM_STR, arq);
  fgets(str2, TAM_STR, arq);
  fgets(str3, TAM_STR, arq);
  printf("\n%s\n%s\n%s\n", str1, str2, str3);

  return 0;
}