/* 
 * Unidade II - Comandos break e continue
 * Demonstra uso de break e continue em laços
 */

#include <stdio.h>

int main() {
    int i;
    
    // Exemplo com break
    printf("Exemplo com break (para em 5):\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Sai do laço
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Exemplo com continue
    printf("Exemplo com continue (pula números pares):\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Pula para a próxima iteração
        }
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
