/* 
 * Unidade IV - Recursão
 * Demonstra função recursiva (fatorial)
 */

#include <stdio.h>

// Função recursiva para calcular fatorial
int fatorial(int n) {
    if (n <= 1) {
        return 1; // Caso base
    }
    return n * fatorial(n - 1); // Chamada recursiva
}

int main() {
    int numero, resultado;
    
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Fatorial não existe para números negativos.\n");
    } else {
        resultado = fatorial(numero);
        printf("%d! = %d\n", numero, resultado);
    }
    
    return 0;
}
