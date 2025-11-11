/* 
 * Unidade IV - Ponteiros e Arrays
 * Demonstra relação entre ponteiros e arrays
 */

#include <stdio.h>

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};
    int *p;
    int i;
    
    // Ponteiro aponta para o início do array
    p = vetor; // Equivalente a: p = &vetor[0]
    
    printf("Acessando array com notação de array:\n");
    for (i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    printf("\nAcessando array com notação de ponteiro:\n");
    for (i = 0; i < 5; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }
    
    printf("\nAcessando array com ponteiro incrementado:\n");
    p = vetor;
    for (i = 0; i < 5; i++) {
        printf("*p = %d\n", *p);
        p++; // Move o ponteiro para o próximo elemento
    }
    
    return 0;
}
