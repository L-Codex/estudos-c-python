/* 
 * Unidade II - Estrutura condicional if
 * Demonstra uso básico do if
 */

#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    }
    
    if (idade < 18) {
        printf("Você é menor de idade.\n");
    }
    
    return 0;
}
