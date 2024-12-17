#include <stdio.h>

int main(void) {
  int array_valores[10];
  int i=0;

  for (i = 0; i< 10; i++){
    array_valores[i] = i * i;
  }

  for (i=0; i< 10; i++){
    printf("Array_Valores [%i] = %i\n", i, array_valores[i]);
  }

  
  return 0;
}