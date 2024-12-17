#include <stdio.h>

struct func {
  char rua[40];
  char num[6];
  char bairro[20];
  char cep[8];
};

struct Tfuncionario {
  char mat[8];
  char nome[30];
  char cargo[20];
  int numdep;
  float salario;
  char dtadm[8];
  struct func ender;
};

int main(void) {

  struct Tfuncionario func;

  printf("Matricula: ");
  gets(func.mat);
  printf("Nome: ");
  gets(func.nome);
  printf("Rua: ");
  gets(func.ender.rua);
  printf("Numero: ");
  gets(func.ender.num);
  printf("Bairro: ");
  gets(func.ender.bairro);
  printf("CEP: ");
  gets(func.ender.cep);
  printf("Cargo: ");
  gets(func.cargo);
  printf("Numero do Depto: ");
  scanf(" %d", &func.numdep);
  printf("Salário: ");
  scanf(" %f", &func.salario);
  printf("Data de Admissão: ");
  scanf(" %s", &func.dtadm);

  printf("\n\n");
  printf("##Dados Salvos nas Structs");
  printf("Matricula: %s\n", func.mat);
  printf("Nome: %s\n", func.nome);
  printf("Rua: %s\n", func.ender.rua);
  printf("Numero: %s\n", func.ender.num);
  printf("Bairro: %s\n", func.ender.bairro);
  printf("CEP: %s\n", func.ender.cep);
  printf("Cargo: %s\n", func.cargo);
  printf("Numero do Depto: %d\n", func.numdep);
  printf("Salário: %.2f\n", func.salario);
  printf("Data de Admissão: %s\n", func.dtadm);

  return 0;
}