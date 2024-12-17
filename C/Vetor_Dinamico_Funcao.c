#include <stdio.h>
#include <stdlib.h> 

void vetor_dinamico(){
  
  float *vetor; //ponteiro de vetor
  int i, num_componentes;

  printf("Informe o numero de componentes do vetor\n");
  scanf("%i", &num_componentes);

  vetor = (float *) malloc(num_componentes * sizeof(float));

  for (i = 0; i < num_componentes; i++)
  {
    printf("\nDigite o valor para a posicao %i do vetor: ", i+1);
    scanf("%f",&vetor[i]);
  }  

  printf("\n*********** Valores do vetor dinamico ************\n\n");

  for (i = 0;i < num_componentes; i++)
  {
    printf("%.2f\n",vetor[i]);
  }

  free(vetor);
  
}

int main(void)
{

  int op=0;

  while(op!= 99){
    printf ("Informe uma opção abaixo: \n");
    printf("1 - Adicionar elementos ao Vetor:\n");
    printf("99 - Sair:\n");
    scanf("%i", &op);

    switch(op){
      case 1:{
        vetor_dinamico();
        break;
      }

      case 99:{
        printf("Saindo do programa...\n");
        op = 99;
        break;
      }
      default:{
        printf("Opção inválida!\n");
        break;
      }
      
    }
    
  }
  return 0;
}