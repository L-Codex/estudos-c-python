/* 
 * Unidade IV - Funções em C
 * Demonstra definição e chamada de funções
 */

#include <stdio.h>

// Declaração da função
void saudacao();
int soma(int a, int b);
float calcularMedia(float n1, float n2, float n3);

int main() {
    int resultado;
    float media;
    
    saudacao();
    
    resultado = soma(5, 3);
    printf("5 + 3 = %d\n", resultado);
    
    media = calcularMedia(7.5, 8.0, 9.5);
    printf("Média: %.2f\n", media);
    
    return 0;
}

// Implementação das funções
void saudacao() {
    printf("Bem-vindo ao programa de funções!\n\n");
}

int soma(int a, int b) {
    return a + b;
}

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}
