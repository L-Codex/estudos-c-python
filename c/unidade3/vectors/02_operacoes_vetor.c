/* 
 * Unidade III - Operações com Vetores
 * Demonstra operações comuns: soma, média, maior, menor
 */

#include <stdio.h>

int main() {
    int numeros[5] = {10, 25, 8, 42, 15};
    int i, soma = 0, maior, menor;
    float media;
    
    // Inicializa maior e menor com o primeiro elemento
    maior = menor = numeros[0];
    
    // Calcula soma, maior e menor
    for (i = 0; i < 5; i++) {
        soma += numeros[i];
        
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    
    media = soma / 5.0;
    
    printf("Vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("\n\nSoma: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    
    return 0;
}
