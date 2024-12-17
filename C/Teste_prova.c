#include <stdio.h>

int main(void) {
  int pt, x;

  pt = &x;

  printf("Teste PT com usando operador inteiro =  %i", pt);
  printf("\n");
  printf("\nTeste PT com endereço usando o operador de memoria = %x", pt);
  printf("\n");
  printf("\nTeste X usando operador interiro =  %i", x);
  printf("\n");
  printf("\nTeste X usando endereço usando o operador de memoria = %x", x);
  printf("\n");
  printf("\n-----------------------------------------------------------------\n");
  printf("Usando tipos Forçados para mostrar o endereço de memoria");
  printf("\n");
  printf("\nTeste X usando endereço de mémoria %x", &x);
  printf("\n");
  printf("\nTeste PT usando endereço de mémoria %x", pt);
  printf("\n-----------------------------------------------------------------\n");

  return 0;
}