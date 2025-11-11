/* 
 * Unidade IV - Passagem de Parâmetros
 * Demonstra passagem por valor e por referência
 */

#include <stdio.h>

// Passagem por valor
void duplicarValor(int x) {
    x = x * 2;
    printf("Dentro da função (por valor): x = %d\n", x);
}

// Passagem por referência (usando ponteiros)
void duplicarReferencia(int *x) {
    *x = *x * 2;
    printf("Dentro da função (por referência): *x = %d\n", *x);
}

int main() {
    int numero1 = 10;
    int numero2 = 10;
    
    printf("=== Passagem por Valor ===\n");
    printf("Antes: numero1 = %d\n", numero1);
    duplicarValor(numero1);
    printf("Depois: numero1 = %d\n\n", numero1);
    
    printf("=== Passagem por Referência ===\n");
    printf("Antes: numero2 = %d\n", numero2);
    duplicarReferencia(&numero2);
    printf("Depois: numero2 = %d\n", numero2);
    
    return 0;
}
