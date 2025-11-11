/* 
 * Unidade IV - Ponteiros
 * Demonstra definição e uso básico de ponteiros
 */

#include <stdio.h>

int main() {
    int valor = 42;
    int *ponteiro;
    
    // Ponteiro recebe o endereço de valor
    ponteiro = &valor;
    
    printf("Valor da variável: %d\n", valor);
    printf("Endereço da variável: %p\n", (void*)&valor);
    printf("\n");
    printf("Endereço armazenado no ponteiro: %p\n", (void*)ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);
    printf("\n");
    
    // Modificando valor através do ponteiro
    *ponteiro = 100;
    printf("Após *ponteiro = 100:\n");
    printf("Valor da variável: %d\n", valor);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);
    
    return 0;
}
