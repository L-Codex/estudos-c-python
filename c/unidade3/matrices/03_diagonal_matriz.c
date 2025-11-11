/* 
 * Unidade III - Diagonal de uma Matriz
 * Demonstra como imprimir a diagonal principal de uma matriz
 */

#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j;
    
    printf("Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal principal: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
    
    return 0;
}
