#include <stdio.h>

typedef struct {
  int idade;
  int nome[50];
  float salario_trabalho;
  char local_trabalho[50];
} Pessoa;

typedef struct{
  int id_trabalho;
  int empresa[50];
  char cargo[50];
} Trabalho;

int main(){
  Pessoa marcelo;

  printf("Qual a sua idade?");
  scanf("%d",&marcelo.idade);
  
  printf("\nA idade do  marcelo é:%d",marcelo.idade);
}