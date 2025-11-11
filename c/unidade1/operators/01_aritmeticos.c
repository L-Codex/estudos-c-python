/* 
 * Unidade I - Operadores aritméticos
 * Demonstra: +, -, *, /, %
 */

#include <stdio.h>

int main() {
    int a = 10, b = 3;
    
    printf("a = %d, b = %d\n\n", a, b);
    
    printf("Soma: %d + %d = %d\n", a, b, a + b);
    printf("Subtração: %d - %d = %d\n", a, b, a - b);
    printf("Multiplicação: %d * %d = %d\n", a, b, a * b);
    printf("Divisão: %d / %d = %d\n", a, b, a / b);
    printf("Resto: %d %% %d = %d\n", a, b, a % b);
    
    return 0;
}
