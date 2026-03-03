#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int x=10,y=2*x,z=5*y,c=4*x;
    int *ptr1, *ptr2, *ptr3, *ptrN; //declara variável de ponteiro
    char tc='c';
    char *ptr4;
        
            // atribui valor a um ponteiro ou atribuir uma variavel  
            ptr1=&x;
            ptr2=&y;
            ptr3=&z;
            ptr4=&tc;
            ptrN=&c;
                
                printf(" valor x = %d\n",x);
                printf(" valor y = %d\n",y);
                printf(" valor z = %d\n",z);
                printf(" Valor c = %d\n",c);
                printf("valor tc = %c\n",tc);
                printf("-----------------------------------------\n");
                    
                    // para mostrar o endereço de memória usamos %p e & com a variavel que queremos mostrar
                    printf(" End. Mem. x = %p\n",&x);
                    printf(" End. Mem. y = %p\n",&y);
                    printf(" End. Mem. z = %p\n",&z);
                    printf(" End. Mem. c = %p\n", &c);
                    printf("End. Mem. tc = %p\n",&tc);
                    printf("-----------------------------------------\n");

                        // para o ponteiro e o mesmo jeito
                        printf("End. Mem. ptr1 = %p\n",&ptr1);
                        printf("End. Mem. ptr2 = %p\n",&ptr2);
                        printf("End. Mem. ptr3 = %p\n",&ptr3);
                        printf("End. Mem. ptr4 = %p\n",&ptr4);
                        printf("End. Mem. ptrN = %p\n",&ptrN);
                        printf("-----------------------------------------\n");

                            // para mostrar o valor de ponteiro é só colocar sem & comercial
                            printf("Valor ptr1 = %p\n",ptr1);
                            printf("Valor ptr2 = %p\n",ptr2);
                            printf("Valor ptr3 = %p\n",ptr3);
                            printf("Valor ptr4 = %p\n",ptr4);
                            printf("Valor ptrN = %p\n",ptrN);
                            printf("-----------------------------------------\n");

                                // para mostrar o valor que o ponteiro aponta usamos %d e * (junto com o ponteiro)
                                printf("Vlr. onde ptr1 aponta = %d\n",*ptr1);
                                printf("Vlr. onde ptr2 aponta = %d\n",*ptr2);
                                printf("Vlr. onde ptr3 aponta = %d\n",*ptr3);
                                printf("Vlr. onde ptr4 aponta = %c\n",*ptr4);
                                printf("Vlr. onde ptrN aponta = %d\n",*ptrN);
                                printf("-----------------------------------------\n");

                                    // para mostrar o End. Mem. onde o ponteiro aponta usamos %p, depois &* (junto o ponteiro)
                                    printf("End. Mem. onde ptr1 aponta = %p\n",&*ptr1);
                                    printf("End. Mem. onde ptr2 aponta = %p\n",&*ptr2);
                                    printf("End. Mem. onde ptr3 aponta = %p\n",&*ptr3);
                                    printf("End. Mem. onde ptr4 aponta = %p\n",&*ptr4);
                                    printf("End. Mem. onde ptrN aponta = %p\n",&*ptrN);
                                    printf("-----------------------------------------\n");
                        
            char nome[40];
                printf("Informe seu nome completo: ");
                   fgets(nome, 40, stdin);

                system("cls");
                  printf("Seu nome completo: \n");
                   printf("%s\n",nome);
                
                // endereço de memória da variavel nome
                printf("End. Mem. nome = %p\n", &nome);

                // endereço de memória de cada caracter do nome
                for (int i = 0; i < strlen(nome); i++) {
                    printf("End. Mem. nome = %p\n", &nome);
                }
                

        system("pause");
    return 0;
}