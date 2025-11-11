/* 
 * Unidade I - Operadores relacionais e lógicos
 * Demonstra: ==, !=, <, >, <=, >=, &&, ||, !
 */

#include <stdio.h>

int main() {
    int x = 5, y = 10;
    
    printf("x = %d, y = %d\n\n", x, y);
    
    // Operadores relacionais
    printf("Operadores Relacionais:\n");
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
    printf("x < y: %d\n", x < y);
    printf("x > y: %d\n", x > y);
    printf("x <= y: %d\n", x <= y);
    printf("x >= y: %d\n", x >= y);
    
    // Operadores lógicos
    printf("\nOperadores Lógicos:\n");
    printf("(x < y) && (y > 0): %d\n", (x < y) && (y > 0));
    printf("(x > y) || (y > 0): %d\n", (x > y) || (y > 0));
    printf("!(x == y): %d\n", !(x == y));
    
    return 0;
}
