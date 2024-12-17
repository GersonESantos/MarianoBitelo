#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionarios{
  char nome[30];
  int idade;
  int cep;
  char sexo[20];
  float salario;  
  int *proximo;
  int tam; 
}dados;

typedef struct dependentes{
  char nome_depen[30];
  char beneficios[30];
}depen;


int main(void) {
  dados func;
  depen familia;
  char ps;

  fgets(func.nome, 30, stdin);
  
  fflush(stdin);
  printf("Bem-Vindo ao nosso sistema de cadastro:\n");
  fflush(stdin);
  printf("Digite o nome do funcionario:\n");
  fgets(func.nome, 30, stdin);
  fflush(stdin);
  printf("\nInforme a idade do funcionario: %s", func.nome);
  scanf("%d", &func.idade);
  printf("\nInforme o CEP do funcionario: %s", func.nome);
  scanf("%i", &func.cep);
  fflush(stdin);

  fgets(func.sexo, 20, stdin);
  
  printf("\nInforme o sexo do funcionario: %s", func.nome);
  fgets(func.sexo, 20, stdin);
  fflush(stdin);
  printf("\nInforme o salario do funcionario: %s", func.nome);
  scanf("%f", &func.salario);
  fflush(stdin);
  
  printf("Os dados cadastrados do Funcionario: %s são: \n", func.nome);
  printf("são: [%i] | [%i] | [%s] |  [%.2f] | ", func.cep, func.idade, func.sexo, func.salario);
  
  fgets(familia.beneficios, 30, stdin);
  
  fflush(stdin);
  fgets(familia.nome_depen, 30, stdin);
  printf("Deseja cadastrar dependentes? (S/N)");
  scanf("%c", &ps);
  fflush(stdin);
    
  if (ps == 's' || ps == 'S'){
    fgets(familia.nome_depen, 30, stdin);
    fflush(stdin);
    printf("Informe o nome do seu dependente: \n");
    fgets(familia.nome_depen, 30, stdin);
    fflush(stdin);
    printf("Informe o beneficio do seu dependente: \n");
    fflush(stdin);
    fgets(familia.beneficios, 30, stdin);
    fflush(stdin);
    
    printf("Os Dependentes do Funcionario: %s \n", func.nome);
    printf("são: %s \n %s \n", familia.nome_depen, familia.beneficios);
  }else{
    printf("Obrigado pela informações\n");
  }
  
  
  
  
}