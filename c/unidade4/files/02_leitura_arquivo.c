/* 
 * Unidade IV - Leitura de Arquivo
 * Demonstra como ler dados de um arquivo
 */

#include <stdio.h>

int main() {
    FILE *arquivo;
    char linha[100];
    
    // Abre arquivo para leitura
    arquivo = fopen("dados.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        printf("Certifique-se de que o arquivo 'dados.txt' existe.\n");
        return 1;
    }
    
    printf("Conteúdo do arquivo:\n");
    printf("-------------------\n");
    
    // Lê linha por linha
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    
    // Fecha o arquivo
    fclose(arquivo);
    
    return 0;
}
