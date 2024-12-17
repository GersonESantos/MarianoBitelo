#include <stdio.h>
#define NOME_ARQUIVO "arquivo.txt"
#define TAM_STR 50

int main(void) {

  char str1[40];
  char str2[50];
  char str3[50];
  char str4[50];
  FILE *arq;

  if (!(arq = fopen(NOME_ARQUIVO, "w"))) {
    printf("Não foi possivel abrir o arquivo %s\n", NOME_ARQUIVO);
    exit(1);
  }

  fgets(str1, TAM_STR, arq);
  fgets(str2, TAM_STR, arq);
  fgets(str3, TAM_STR, arq);
  fgets(str4, TAM_STR, arq);
  printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4);

  fclose(arq);

  return 0;
}