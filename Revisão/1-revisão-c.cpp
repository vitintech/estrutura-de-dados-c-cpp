#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// REVISÃO 1 - Fácil
// declare uma variável int x = 10

// crie um ponteiro para ela

// imprima:

// valor de x

// endereço de x

// valor armazenado no ponteiro

// valor apontado pelo ponteiro


// REVISÃO 2 - Fácil
// Faça um programa que altere o valor de uma variável usando ponteiro.

void ponteiro() {
    int x = 10;
    int *ptr = &x;

        // Revisão 1

        printf("%d \n", x);
        printf("%p\n", &x);

        printf("%d\n", *ptr);
        printf("%p\n", &ptr);
}

void alternando() {
    int y = 5;
    int *ptr = &y;

        // Revisão 2

        printf("==================== \n");
        printf("Valor antes: %d\n", y);

        *ptr = 18;
          printf("Valor depois: %d\n", *ptr);
}

int main() {
    ponteiro();
    alternando();

    system("pause");
    return 0;
}