#include <stdio.h>

struct funcionario {
  char nome[30];
  int idade;
  char sexo;
  float altura;
};

int main(void) {
  struct funcionario f1;
  struct funcionario f2;

  strcpy(f1.nome, "Joao");
  f1.idade = 38;
  f1.sexo = 'M';
  f1.altura = 1.76;

  strcpy(f2.nome, "Mariano");
  f2.idade = 30;
  f2.sexo = 'M';
  f2.altura = 1.87;

  printf("Nome: %s\n", f1.nome);
  printf("Idade: %d\n", f1.idade);
  printf("Sexo: %c\n", f1.sexo);
  printf("Altura: %4.2f\n", f1.altura);
  printf("\n\n");
  printf("Nome: %s\n", f2.nome);
  printf("Idade: %d\n", f2.idade);
  printf("Sexo: %c\n", f2.sexo);
  printf("Altura: %4.2f\n", f2.altura);

  return 0;
}