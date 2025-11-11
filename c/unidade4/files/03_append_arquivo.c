/* 
 * Unidade IV - Append em Arquivo
 * Demonstra como adicionar dados ao final de um arquivo
 */

#include <stdio.h>

int main() {
    FILE *arquivo;
    char texto[100];
    
    printf("Digite uma linha para adicionar ao arquivo: ");
    fgets(texto, sizeof(texto), stdin);
    
    // Abre arquivo em modo append
    arquivo = fopen("dados.txt", "a");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    
    // Adiciona ao final do arquivo
    fprintf(arquivo, "%s", texto);
    
    fclose(arquivo);
    
    printf("Texto adicionado ao arquivo com sucesso!\n");
    
    return 0;
}
