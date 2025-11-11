/* 
 * Unidade IV - Escrita em Arquivo
 * Demonstra como escrever dados em um arquivo
 */

#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[50];
    int idade;
    
    // Abre arquivo para escrita
    arquivo = fopen("dados.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    // Escreve no arquivo
    fprintf(arquivo, "Nome: %s\n", nome);
    fprintf(arquivo, "Idade: %d\n", idade);
    
    // Fecha o arquivo
    fclose(arquivo);
    
    printf("Dados salvos em 'dados.txt' com sucesso!\n");
    
    return 0;
}
