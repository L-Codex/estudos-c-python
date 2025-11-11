/* 
 * Unidade II - Laço do-while
 * Demonstra uso do laço do-while (executa pelo menos uma vez)
 */

#include <stdio.h>

int main() {
    int numero;
    
    do {
        printf("Digite um número positivo (negativo para sair): ");
        scanf("%d", &numero);
        
        if (numero >= 0) {
            printf("Você digitou: %d\n", numero);
        }
    } while (numero >= 0);
    
    printf("Programa encerrado.\n");
    
    return 0;
}
