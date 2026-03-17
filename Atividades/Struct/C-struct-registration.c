// Passo 1: Criar struct contendo nome, idade e telefone e fazer a inserção do dado, apresentando os dados no final (para conferencia). OK

// Passo 2: Converter estrutura para um vetor de 5 elementos. Fazer a entrada dos dados e apresentar no final. OK

// Passo 3: Construir um procedimento para entrada dos dados e outro procedimento para saída. OK

// Passo 4: Construir um procedimento para classificar o vetor (por nome). Fazer a entrada, o processamento (ordenação) e saída. OK

// Passo 5: Construir um procedimento para classificar o vetor (por idade). 
// Construir menu contendo (entrada, ordenar por nome, ordenar por idade, apresentar vetor, fim) OK

// Passo 6: Construir um procedimento para classificar o vetor (por fone). Adicionar ao menu possibilidade de ordenar por fone também. OK

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tot 5

typedef struct {
          char nome[50];
          int idade;
          char telefone[20];
      } Dados;

      int i;
      int j;

      void cadastro_Pessoal(Dados d[]) {
        system("cls");

        for ( i = 0; i < tot; i++) {
          printf("%d CADASTRO \n\n", i + 1);

            printf("Nome: ");
              fgets(d[i].nome, 50, stdin);
              d[i].nome[strcspn(d[i].nome, "\n")] = '\0'; // para eliminar o \n do fgets

            printf("Idade: ");
              scanf("%d", &d[i].idade);
              getchar(); // para limpar buffer do ENTER;

            printf("Telefone: ");
              fgets(d[i].telefone, 20, stdin);
              d[i].telefone[strcspn(d[i].telefone, "\n")] = '\0'; // para eliminar o \n do fgets

          system("cls");
        }
      }

      void mostrar_Cadastro(Dados d[]) {
        system("cls");

            printf("--- EXIBICAO DE CADASTRO ---\n\n");
        for ( i = 0; i < 5; i++) {
              printf("Nome: %s\n", d[i].nome);
              printf("Idade: %d\n", d[i].idade);
              printf("Telefone: %s\n", d[i].telefone);

          printf("\n");
        }
      }

      void classifica_Nome(Dados d[]) {
        for (i = 0; i < tot - 1; i++) {
          for ( j = 0; j < tot - 1 - i; j++) {
            if (strcmp(d[j].nome, d[j + 1].nome) > 0) {

              Dados aux = d[j];
              d[j] = d[j + 1];
              d[j + 1] = aux;
            }
          }
        }
        system("cls");
        printf("Classificacao feita com sucesso! \n\n");
      }

      void classifica_Idade(Dados d[]) {
        for (i = 0; i < tot - 1; i++) {
          for ( j = 0; j < tot - 1 - i; j++) {
            if (d[j].idade > d[j + 1].idade) {

              Dados aux = d[j];
              d[j] = d[j + 1];
              d[j + 1] = aux;
            }
          }
        }
        system("cls");
        printf("Classificacao feita com sucesso! \n\n");
      }

      void classifica_Telefone(Dados d[]) {
        for (i = 0; i < tot - 1; i++) {
          for ( j = 0; j < tot - 1 - i; j++) {
            if (strcmp(d[j].telefone, d[j + 1].telefone) > 0) {

              Dados aux = d[j];
              d[j] = d[j + 1];
              d[j + 1] = aux;
            }
          }
        }
        system("cls");
        printf("Classificacao feita com sucesso! \n\n");
      }

      void menu(Dados d[]) {
        int op;

        do {
        printf("ESCOLHA UMA DAS OPCOES \n\n");

            printf("1 - Cadastro Pessoal \n");
            printf("2 - Classifica por Nome \n");
            printf("3 - Classifica por Idade \n");
            printf("4 - Classifica por Telefone \n");
            printf("5 - Apresenta Dados \n");
            printf("6 - Fim \n");

          printf("Opcao: ");
            scanf("%d", &op);
            getchar(); // limpar buffer do ENTER do menu

            switch (op) {
            case 1:
              cadastro_Pessoal(d);
            break;

            case 2:
              classifica_Nome(d);
            break;

            case 3:
              classifica_Idade(d);
            break;

            case 4:
              classifica_Telefone(d);
            break;

            case 5:
              mostrar_Cadastro(d);
            break;

            case 6:
              system("cls");
              printf("\nFim do programa, obrigado ;)");
            break;

            default:
              printf("\nOpcao invalida!\n");
              break;
          }
        } while (op != 6);
      }

      int main() {
          Dados pessoa[tot];

          menu(pessoa);    
        return 0;
}