/* 
 * Unidade I - Tipos de dados básicos em C
 * Demonstra: int, float, double, char
 */

#include <stdio.h>

int main() {
    // Tipos inteiros
    int idade = 25;
    
    // Tipos de ponto flutuante
    float altura = 1.75;
    double peso = 70.5;
    
    // Tipo caractere
    char inicial = 'A';
    
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Peso: %.1f kg\n", peso);
    printf("Inicial do nome: %c\n", inicial);
    
    return 0;
}
