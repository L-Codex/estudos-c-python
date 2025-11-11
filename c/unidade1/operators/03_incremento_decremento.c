/* 
 * Unidade I - Operadores de incremento e decremento
 * Demonstra: ++, --
 */

#include <stdio.h>

int main() {
    int x = 5;
    
    printf("Valor inicial de x: %d\n\n", x);
    
    // Pré-incremento
    printf("Pré-incremento (++x): %d\n", ++x);
    printf("Valor de x após: %d\n\n", x);
    
    // Pós-incremento
    x = 5; // reset
    printf("Pós-incremento (x++): %d\n", x++);
    printf("Valor de x após: %d\n\n", x);
    
    // Pré-decremento
    printf("Pré-decremento (--x): %d\n", --x);
    printf("Valor de x após: %d\n\n", x);
    
    // Pós-decremento
    printf("Pós-decremento (x--): %d\n", x--);
    printf("Valor de x após: %d\n", x);
    
    return 0;
}
