#include <stdio.h>

struct funcionario {
  float salario;
  float decimo;
  int dependentes;
} typedef funcionarios;

struct ficha {
  int cod;
  char nome[40];
  char tel[10];
  funcionarios func;
} typedef ficha;

int main(void) {

  ficha func,func2;

  func.func.decimo = 1500;

  printf("Código do funcionário: ");
  scanf("%d", &func.cod);
  printf("Nome do funcionário: ");
  scanf("%s", &func.nome);
  printf("Informe a quantidade de Dependentes do Funcionarios: %s", func.nome);
  scanf("%i", &func.func.dependentes);
  printf("Telefone do funcionário: ");
  scanf("%s", &func.tel);
  func.func.salario = 1000;
  func.func.decimo += func.func.salario / 12;
  printf("\nO nome do funcionario é: %s", func.nome);
  printf("\nSalario é: %.2f", func.func.salario);
  printf("\nO decimo é: %.2f", func.func.decimo);
  printf("\nA quantidade de Depedentes é: %i ", func.func.dependentes);

  return 0;
}