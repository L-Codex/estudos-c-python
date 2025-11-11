/* 
 * Unidade II - Laços aninhados
 * Demonstra uso de laços for aninhados
 */

#include <stdio.h>

int main() {
    int i, j;
    
    printf("Tabuadas de 1 a 5:\n\n");
    
    for (i = 1; i <= 5; i++) {
        printf("Tabuada do %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    
    return 0;
}
