/* 
 * Unidade III - Busca em Vetor
 * Demonstra busca linear em vetor
 */

#include <stdio.h>

int main() {
    int numeros[5] = {10, 25, 8, 42, 15};
    int busca, i, encontrado = 0;
    
    printf("Vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("\n\nDigite o número a buscar: ");
    scanf("%d", &busca);
    
    // Busca linear
    for (i = 0; i < 5; i++) {
        if (numeros[i] == busca) {
            printf("Número %d encontrado na posição %d\n", busca, i);
            encontrado = 1;
            break;
        }
    }
    
    if (!encontrado) {
        printf("Número %d não encontrado no vetor.\n", busca);
    }
    
    return 0;
}
