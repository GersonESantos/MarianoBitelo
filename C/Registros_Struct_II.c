#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[15];
  char end[10];
  int tel;
  int matricula;
  float peso;
  float altura;
} Alunos;

int main(void) {
  Alunos aluno[5];
  int i;

  fflush(stdin);
  for (i = 0; i < 5; i++) {
    fflush(stdin);
    fflush(stdin);
    fflush(stdin);
    printf("Digite o nome do aluno: ");
    fgets(aluno[i].nome,15,stdin);
    fflush(stdin);
    fflush(stdin);
    printf("Digite o endereco do aluno: ");
    fgets(aluno[i].end, 10, stdin);
    fflush(stdin);
    fflush(stdin);
    printf("Informe o telefone do aluno: ");
    scanf("%i", &aluno[i].tel);
    fflush(stdin);
    fflush(stdin);
    printf("Informe a matricula do aluno: ");
    scanf("%i", &aluno[i].matricula);
    fflush(stdin);
    printf("Informe o peso do aluno: ");
    scanf("%f", &aluno[i].peso);
    fflush(stdin);
    printf("Informe a altura do aluno: ");
    scanf("%f", &aluno[i].altura);
    fflush(stdin);
    fflush(stdin);
    fflush(stdin);
  }

  for (i = 0; i < 5; i++) {
    printf("\n");
    printf("Nome: %s", aluno[i].nome);
    printf("\nEndereco: %s", aluno[i].end);
    printf("\nTelefone: %i", aluno[i].tel);
    printf("\nMatricula: %i", aluno[i].matricula);
    printf("\nPeso: %.2f", aluno[i].peso);
    printf("\nAltura: %.2f", aluno[i].altura);
    printf("\n");
  }

  return 0;
}