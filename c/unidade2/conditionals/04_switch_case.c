/* 
 * Unidade II - Estrutura switch-case
 * Demonstra uso de switch para múltiplas opções
 */

#include <stdio.h>

int main() {
    int opcao;
    
    printf("=== Menu ===\n");
    printf("1. Cadastrar\n");
    printf("2. Consultar\n");
    printf("3. Alterar\n");
    printf("4. Excluir\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            printf("Opção Cadastrar selecionada.\n");
            break;
        case 2:
            printf("Opção Consultar selecionada.\n");
            break;
        case 3:
            printf("Opção Alterar selecionada.\n");
            break;
        case 4:
            printf("Opção Excluir selecionada.\n");
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
    
    return 0;
}
