#include <stdio.h>

int main(void) {
  int num1, num2;
  float soma, div, multi, sub;
  
  printf("Bem-Vindo ao nosso primeiro prgrama em C: ");

  //Entrada de dados
  printf("\nDigite um numero: \n");
  scanf("%i", &num1);

  printf("Digite outro numero: \n");
  scanf("%i", &num2);

  //aqui é onde estamos realizando as operações
  soma = num1 + num2;
  sub = num1 - num2;
  multi = num1 * num2;
  div = num1 / num2;

  //aqui onde estamos monstrando os resultados
  printf("\nA soma dos numeros é: %.2f", soma);
  printf("\nA Subtração dos numeros é: %.2f", sub);
  printf("\nA Multiplicação dos numeros é: %.2f", multi);
  printf("\nA divisão dos numeros é: %.2f", div);
  
  return 0;
}