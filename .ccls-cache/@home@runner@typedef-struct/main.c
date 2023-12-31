#include <stdio.h>
#include <string.h>

typedef struct {
  int idade;
  char nome[50];
  float salario_trabalho;
  char local_trabalho[50];
} Pessoa;

// Função para criar e inicializar uma instância da estrutura Pessoa
Pessoa criarPessoa(int idade, const char *nome, float salario, const char *local) 
{
    Pessoa novaPessoa;
    novaPessoa.idade = idade;
    novaPessoa.salario_trabalho = salario;
    strcpy(novaPessoa.nome, nome);
    strcpy(novaPessoa.local_trabalho, local);

    return novaPessoa;
}

typedef struct{
  int id_trabalho;
  char empresa[50];
  char cargo[50];
} Trabalho;

// Função para criar e inicializar uma instância da estrutura Trabalho
Trabalho criarTrabalho(int id, const char *empresa, const char *cargo) {
    Trabalho novoTrabalho;

    novoTrabalho.id_trabalho = id;
    strcpy(novoTrabalho.empresa, empresa);
    strcpy(novoTrabalho.cargo, cargo);

    return novoTrabalho;
}

// Função para exibir informações de Pessoa e Trabalho
void exibirInformacoes(Pessoa p, Trabalho t) {
    printf("\nO seu nome é: %s", p.nome);
    printf("\nA idade de Marcelo é: %d", p.idade);
    printf("\nO seu local de trabalho é: %s", p.local_trabalho);
    printf("\nO ID de trabalho é: %d", t.id_trabalho);
    printf("\nO nome da empresa que você trabalha é: %s", t.empresa);
    printf("\nO seu cargo atualmente é: %s\n", t.cargo);
}

int main(){
  Pessoa marcelo;
  Trabalho marcelo1;
  
  ////struct pessoa
  marcelo.idade = 24;
  marcelo.salario_trabalho = 8.900;
  strcpy(marcelo.nome,"Marcelo E Batista");
  strcpy(marcelo.local_trabalho,"marin_doce");
  
  ////struct trabalho
  marcelo1.id_trabalho = 10;
  strcpy(marcelo1.empresa,"Doces Rios");
  strcpy(marcelo1.cargo,"Aux de PCP");
  
  printf("Qual o seu nome: ");
  fgets(marcelo.nome, sizeof(marcelo.nome), stdin);
  /*A função fgets lê uma linha inteira, incluindo espaços, até atingir o número máximo de caracteres especificado (nesse caso, sizeof(marcelo.nome)). Certifique-se de incluir <string.h> no início do arquivo para utilizar essa função*/
  
  printf("\nO seu nome é: %s",marcelo.nome);
  printf("\nA idade de Marcelo é: %d",marcelo.idade);
  printf("\nO seu local de trabalho é: %s",marcelo.local_trabalho);
  printf("\nO ID de trabalho é: %d",marcelo1.id_trabalho);
  printf("\nO nome da empresa que voce trablha é: %s",marcelo1.empresa);
  printf("\nO seu cargo atualmente é: %s",marcelo1.cargo);

  // Chama a função para exibir informações
  exibirInformacoes(marcelo, marcelo1);

  return 0;
}


///////////////////////////////////////////////////////////////////////

/*Acessando Membros de uma Estrutura:
Quando você declara uma variável de uma estrutura, você pode acessar seus membros usando o operador ponto (.).

#include <stdio.h>

typedef struct {
    int idade;
    char nome[50];
    float salario;
} Pessoa;

int main() {
    Pessoa pessoa1;

    // Atribuindo valores aos membros da estrutura
    pessoa1.idade = 25;
    strcpy(pessoa1.nome, "Joao");
    pessoa1.salario = 50000.0;

    // Exibindo os valores
    printf("Idade: %d\n", pessoa1.idade);
    printf("Nome: %s\n", pessoa1.nome);
    printf("Salario: %.2f\n", pessoa1.salario);

    return 0;
}*/


//////////////////////////////////////////////////////////////////

/*Arrays de Estruturas:
Você pode criar arrays que contenham elementos da sua estrutura.

#include <stdio.h>

typedef struct {
    int idade;
    char nome[50];
    float salario;
} Pessoa;

int main() {
    Pessoa pessoas[3];

    // Preenchendo os dados para três pessoas
    for (int i = 0; i < 3; ++i) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);

        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Digite o salário da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].salario);
    }

    // Exibindo os dados
    for (int i = 0; i < 3; ++i) {
        printf("\nDados da pessoa %d:\n", i + 1);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Salario: %.2f\n", pessoas[i].salario);
    }

    return 0;
}*/

//////////////////////////////////////////////////////////////////////////////////
/*Ponteiros para Estruturas:
Você pode usar ponteiros para trabalhar com estruturas dinamicamente.

Exemplo:

c
Copy code
#include <stdio.h>

typedef struct {
    int idade;
    char nome[50];
    float salario;
} Pessoa;

int main() {
    Pessoa pessoa1;
    Pessoa *ptrPessoa; // Declaração de um ponteiro para Pessoa

    // Atribuindo valores à estrutura
    pessoa1.idade = 25;
    strcpy(pessoa1.nome, "Joao");
    pessoa1.salario = 50000.0;

    // Atribuindo o endereço da estrutura ao ponteiro
    ptrPessoa = &pessoa1;

    // Acessando membros usando o ponteiro
    printf("Idade: %d\n", ptrPessoa->idade);
    printf("Nome: %s\n", ptrPessoa->nome);
    printf("Salario: %.2f\n", ptrPessoa->salario);

    return 0;
}*/