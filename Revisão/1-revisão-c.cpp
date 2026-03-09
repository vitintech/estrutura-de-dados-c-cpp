#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// REVISÃO  - Fácil
// declare uma variável int x = 10

// crie um ponteiro para ela

// imprima:

// valor de x

// endereço de x

// valor armazenado no ponteiro

// valor apontado pelo ponteiro

void ponteiro () {
    int x = 10;
    int *ptr = &x;

        printf("%d \n", x);
        printf("%p\n", &x);

        printf("%d\n", *ptr); // exibi o valor do ponteiro
        printf("%p\n", &ptr); // exibi o endereço do ponteiro
}

// REVISÃO  - Fácil
// Faça um programa que altere o valor de uma variável usando ponteiro.

void alternando () {
    int y = 5;
    int *ptr = &y;

        printf("==================== \n");
        printf("Valor antes: %d\n", y);

        *ptr = 18; // assim que se atribui outro valor ao ponteiro ptr
          printf("Valor depois: %d\n", *ptr);
}

int main () {
    ponteiro();
    alternando();

    system("pause");
    return 0;
}