/* 
 * Unidade II - Estrutura condicional encadeada (if-else if-else)
 * Demonstra uso de múltiplas condições
 */

#include <stdio.h>

int main() {
    float nota;
    
    printf("Digite a nota (0-10): ");
    scanf("%f", &nota);
    
    if (nota >= 9.0) {
        printf("Conceito: A (Excelente)\n");
    } else if (nota >= 7.0) {
        printf("Conceito: B (Bom)\n");
    } else if (nota >= 5.0) {
        printf("Conceito: C (Regular)\n");
    } else {
        printf("Conceito: D (Insuficiente)\n");
    }
    
    return 0;
}
