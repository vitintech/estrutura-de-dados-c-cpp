#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 10

// Com base nas ilustrações apresentadas abaixo, DESENVOLVA um programa em C++ que
// produza exatamente a mesma saída exibida na imagem, utilizando obrigatoriamente os
// mesmos identificadores (nomes das variáveis).

// Os endereços de memória ilustrados são fictícios e consideram uma arquitetura de 32 bits (4
// bytes). No entanto, o programa pode ser compilado e executado em arquitetura 64 bits, desde
// que a lógica e a estrutura permaneçam coerentes com a representação proposta.

void ponteiroInfinito () {
    char nome[size] = "Victor";
    int idade = 18;
    char *p;
    char **pp;
    int *i;
    int **ii;

        p = nome;
          pp = &p;
            printf("Variavel nome: %s\n", nome);
            printf("Usando ponteiro: %s\n", p);
            printf("Usando ponteiro de ponteiro: %s", *pp);
            printf("\n\n");
        
                // Usamos p = nome + 1 para exibir o segundo elemento de nome
                p = nome + 1;
                  *pp = p;
                  printf("2. caractere usando pp com []: %c", **pp);
                  printf("\n");

                // usamos aritmerica de ponteiros para exibir apenas o terceiro elemento
                p = nome + 2;
                  *pp = p;
                    for (int x = 0; x <= size; x++) {
                      printf("3. caractere usando aritmerica de pp: %c\n", **pp);
                    break;
                }
        
        i = &idade;
          ii = &i;
            printf("Variavel idade: %d\n", idade);
            printf("Usando ponteiro: %d\n", *i);
            printf("Usando ponteiro de ponteiro: %d", **ii);

              printf("\n\n");

            printf("End. de nome: %p\n", &nome);
            printf("End. ponteiro de nome: %p\n", &p);
            printf("End. de ponteiro de ponteiro de nome: %p", &pp);

              printf("\n\n");

            printf("End. de idade: %p\n", &idade);
            printf("End. de ponteiro de idade: %p\n", &i);
            printf("End. de ponteiro de ponteiro de idade: %p", &ii);

              printf("\n\n");

            printf("End. ponteiro aponta nome: %p\n", &*p);
            printf("End. ponteiro de ponteiro aponta nome: %p", &*pp);

              printf("\n");
}
int main () {
    ponteiroInfinito();

    system("pause");
    return 0;
}