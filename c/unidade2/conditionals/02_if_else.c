/* 
 * Unidade II - Estrutura condicional if-else
 * Demonstra uso de if-else
 */

#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("%d é par.\n", numero);
    } else {
        printf("%d é ímpar.\n", numero);
    }
    
    return 0;
}
