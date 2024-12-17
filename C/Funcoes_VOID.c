#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cadastrar_Aluno() {
  char nome;
  int matricula = 0;
  float nota1 = 0, nota2 = 0, media = 0;

  printf("Digite o nome do aluno: ");
  scanf("%s", &nome);

  printf("Digite a matricula do aluno: ");
  scanf("%i", &matricula);

  printf("Digite a primeira nota do aluno: ");
  scanf("%f", &nota1);
  printf("Informe uma segunda nota: \n");
  scanf("%f", &nota2);

  media = nota1 + nota2;

  if (media >= 60) {
    printf("Aluno aprovado na AV1");
  } else {
    printf("Aluno reprovado na AV1");
  }
}

int main(void) {
  cadastrar_Aluno();
  return 0;
}