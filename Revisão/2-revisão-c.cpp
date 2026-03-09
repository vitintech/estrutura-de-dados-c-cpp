#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// REVISÃO - nível médio
// Crie uma função que troque dois números usando ponteiros.

void troca () {
    int a = 20;
    int b = 30;
    int *ptr = &a;
    int *ptr2 = &b;
    int tmp;

        printf("Valor de A: %d\n", *ptr);
        printf("Valor de B: %d", *ptr2);

        printf("\n---------------------\n");

        tmp = *ptr;
        *ptr = *ptr2;       // troca feita entre ponteiros
        *ptr2 = tmp;
          printf("Apos a troca, A: %d\n", *ptr);
          printf("Apos a troca, B: %d", *ptr2);

    printf("\n===========================\n");
}

// REVISÃO - nível médio
// usando um vetor de 5 elementos, imprima o endereço da posição, e o valor da posição

void vetor (int v[], int tam) {   
    printf("--- Valor e End. Mem. ---\n");

        for (int i = 0; i < tam; i++) {
            printf(" %d  %p\n", *(v+i), (v+i)); // exibi o valor e endereço de cada posição
        }
}

int main () {
    int vet[5] = {1,2,3,4,5};
    int tamanho = 5;

    troca();
    vetor(vet,tamanho);

    system("\npause");
    return 0;
}