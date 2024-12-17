#include <stdio.h>
#include <stdlib.h>

struct No {
  int codigo;
  float preco;
  int qtde;
  struct No *prox;
};

/*para toda hora nao precisar escrever "struct No" vamos definir
 o tipo No atraves de typedef para simplificar*/
typedef struct No No;

/*registro do tipo Lista contento dois ponteiros do tipo no para controlar a lista*/
struct Lista {
  struct No *inicio; /*aponta para o elemento do inicio da lista*/
  struct No *fim;    /*aponta para o elemento do fim da lista*/
};
typedef struct Lista Lista;

/*necessitaremos tambem de dois ponteiros auxilares *aux e *anterior */
No *aux;
No *anterior;

Lista *cria_lista() {
  /*alocacao do ponteiro li para controlar a lista*/
  Lista *li = (Lista *)malloc(sizeof(Lista));
  if (li != NULL) {
    /*Se a lista esta inicialmente vazia, inicio e fim apontam para NULL */
    li->fim = NULL;
    li->inicio = NULL;
  }
  return li;
}
/*produto sera inserido no fim da lista*/
void insere_produto(Lista *li) {
  /*a cada insercao alocamos dinamicamente um espaco para um novo no*/
  No *novo = (No *)malloc(sizeof(No));
  /*cadastro dos dados do produto*/
  printf("Digite o codigo do produto: ");
  scanf("%d", &novo->codigo);
  printf("Digite o preco do produto: ");
  scanf("%f", &novo->preco);
  printf("Digite a quantidade em estoque do produto: ");
  scanf("%d", &novo->qtde);
  /*caso a lista estiver vazia o primeiro elemento a ser inserido sera o primeiro e ultimo*/
  if (li->inicio == NULL) {
    /*aqui fazemos com que inicio aponte para o mesmo endereco que novo aponta*/
    li->inicio = novo;
    /*aqui fazemos com que fim aponte para o mesmo endereco que novo aponta*/
    li->fim = novo;
    /*aqui fazemos com que o endereco para o qual fim aponta, no atributo prox
     receba NULL*/
    li->fim->prox = NULL;
    /*caso a lista nao esteja vazia*/
  } else {
    /*como a insercao o e no fim, o no para o qual fim aponta, no atributo prox, recebera o endereco de novo, ou seja, o ultimo elemento sera agora o
      penultimo, e portanto devera apontar para o ultimo elemento inseirido*/
    li->fim->prox = novo;
    /*aqui fazemos com que fim aponte para o mesmo do novo no inserido*/
    li->fim = novo;
    /*aqui fazemos com que o endereco para o qual fim aponta, no atributo prox
     receba NULL*/
    li->fim->prox = NULL;
  }
  printf("\nProduto inserido com sucesso!");
}

void aplica_taxa(Lista *li, float taxa) {
  /*caso a lista esteja vazia*/
  if (li->inicio == NULL) {
    printf("\nLista Vazia!!");
    /*caso a lista nao esteja vazia*/
  } else {
    /*utilizando o ponteiro aux,  fazemos com ele aponte para o mesmo endereco
     * que inicio aponta*/
    aux = li->inicio;
    do {
      /*aplicacao da taxa de desconto ao preco do prdouto*/
      aux->preco = aux->preco - aux->preco * (taxa / 100);
      /*aux aponta para o proximo elemento da lista, que sera o endereco contido no ponteiro prox.*/
      aux = aux->prox;
      /*essa operacao sera feita ate aux ser diferente de NULL, ou seja, nao houverem mais elementos a serem impressos*/
    } while (aux != NULL);
    printf("Taxa aplicada com sucesso!");
  }
}
void imprime_relatorio(Lista *li) {
  /*caso a lista esteja vazia*/
  if (li->inicio == NULL) {
    printf("\nLista Vazia!!");
    /*caso a lista nao esteja vazia*/
  } else {
    /*variavel utilizada para contar a quantidade de produtos com quantidade estocada superior a 500*/
    int quantidade = 0;
    /*utilizando o ponteiro aux,  fazemos com ele aponte para o mesmo endereco
     que inicio aponta*/
    aux = li->inicio;
    printf(">>Relatorio<<\n");
    do {
      /*impressao do codigo e preco do produto*/
      printf("\nCodigo do produto %d ", aux->codigo);
      printf("\nPreco do produto %.2f \n\n", aux->preco);
      /*verificacao  da quantidade de produto em estoque*/
      if (aux->qtde > 500)
        quantidade++;
      /*aux aponta para o proximo elemento da lista, que sera o endereco contido no ponteiro prox.*/
      aux = aux->prox;
      /*essa operacaoo sera feita ate aux ser diferente de NULL, ou seja, nao
       * houverem mais elementos a serem impressos*/
    } while (aux != NULL);
    printf(
        "\nQuantidade de produtos com quantidade estocada superior a 500: %d",
        quantidade);
  }
}

void esvaziar_lista(Lista *li) {
  /*caso a lista esteja vazia*/
  if (li->inicio == NULL) {
    printf("\nLista Vazia!!");
    /*caso a lista nao esteja vazia*/
  } else {
    /*utilizando o ponteiro aux,  fazemos com ele aponte para o mesmo endereco
     * de inicio  aponta*/
    aux = li->inicio;
    do {
      /*inicio apontara para o proximo elemento da lista*/
      li->inicio = li->inicio->prox;
      /*desalocamos o espaco para onde aux apontava*/
      free(aux);
      /*aux apontara para o mesmo endereco que inicio aponta*/
      aux = li->inicio;
      /*essa operacao sera feita ate aux ser diferente de NULL, ou seja, nao
       * houverem mais elementos a serem removidos*/
    } while (aux != NULL);
    printf("\nLista Esvaziada!!");
  }
}
int main() {
  int i;
  float taxa;
  Lista *li = cria_lista();
  /*cadastro dos 5 produtos*/
  for (i = 1; i <= 5; i++) {
    printf("Insira o produto numero %d\n", i);
    insere_produto(li);
  }
  
  /*aplicacao da taxa de desconto*/
  printf("Insira a taxa de desconto: ");
  scanf("%f", &taxa);
  aplica_taxa(li, taxa);
  /*impressao do relatario*/
  imprime_relatorio(li);
  /*esvaziamento da lista utilizada*/
  esvaziar_lista(li);
  return 0;
}
