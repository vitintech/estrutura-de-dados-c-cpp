#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

// Construa um código em linguagem C que gere randomicamente 10
// valores aleatórios (não repetidos) para um vetor de inteiros.
// Posteriormente, apresente os valores utilizando aritmética de ponteiro.

int main() {
    int vet[tam];
    int *ptr = vet;
    bool repetido;
    srand(time(NULL));


    for (int i = 0; i < tam; i++) {
        
        do {
            repetido = true;
            *(ptr + i) = (rand() % 10) + 1;

            for (int j = 0; j < i; j++) {
                if (*(ptr + i) == *(ptr + j)) {
                    repetido = false;
                    break;
                }
            }

        } while (repetido != true);
    }
    for (int *ptr = vet; ptr < vet + tam; ptr++) {
        printf("%d \n", *ptr);
    }
    return 0;
}