/* 
 * Unidade III - Vetores (Arrays Unidimensionais)
 * Demonstra declaração e preenchimento de vetores
 */

#include <stdio.h>

int main() {
    int numeros[5];
    int i;
    
    // Preenchimento do vetor
    printf("Digite 5 números:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    // Impressão do vetor
    printf("\nNúmeros digitados:\n");
    for (i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }
    
    return 0;
}
