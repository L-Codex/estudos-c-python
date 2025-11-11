/* 
 * Unidade IV - Escopo de Variáveis
 * Demonstra variáveis locais e globais
 */

#include <stdio.h>

// Variável global
int global = 100;

void funcao1() {
    int local = 10; // Variável local
    printf("Função 1 - Local: %d, Global: %d\n", local, global);
    global = 200; // Modifica variável global
}

void funcao2() {
    int local = 20; // Outra variável local (diferente da funcao1)
    printf("Função 2 - Local: %d, Global: %d\n", local, global);
}

int main() {
    int local = 5; // Variável local do main
    
    printf("Main - Local: %d, Global: %d\n", local, global);
    funcao1();
    funcao2();
    printf("Main - Local: %d, Global: %d\n", local, global);
    
    return 0;
}
