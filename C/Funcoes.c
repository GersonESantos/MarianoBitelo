#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2

struct contato {
  char nome[30], cel[40];
};

int main(void) {
  struct contato agenda[MAX];
  int i;

  fflush(stdin);
  for (i = 0; i < MAX; i++) {
    fflush(stdin);
    printf("Informe um nome de contato: ");
    gets(agenda[i].nome);
    fflush(stdin);
    printf("\n");
    printf("Informe um numero de telefone: ");
    fflush(stdin);
    gets(agenda[i].cel);
    fflush(stdin);
  }

  for (i = 0; i < MAX; i++) {
    printf("\n");
    printf("O contato cadastrado é: %s ", agenda[i].nome);
    printf("\nO numero de telefone é: %s ", agenda[i].cel);
    printf("\n");
  }

  return 0;
}