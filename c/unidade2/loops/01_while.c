/* 
 * Unidade II - Laço while
 * Demonstra uso do laço while
 */

#include <stdio.h>

int main() {
    int contador = 1;
    
    printf("Contando de 1 a 10:\n");
    while (contador <= 10) {
        printf("%d ", contador);
        contador++;
    }
    printf("\n");
    
    return 0;
}
