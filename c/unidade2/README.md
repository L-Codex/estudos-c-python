# Unidade II - Controle de Fluxo e Estruturas de Repetição

Esta unidade cobre estruturas condicionais e laços de repetição em C.

## Conteúdo

### 3. Operações e Controle de Fluxo (`conditionals/`)

- `01_if_simples.c` - Estrutura condicional if básica
- `02_if_else.c` - Estrutura if-else
- `03_if_else_if.c` - Estrutura if-else if-else encadeada
- `04_switch_case.c` - Estrutura switch-case

**Tópicos:**
- Estrutura condicional: `if`
- Estruturas condicionais: `if-else`
- Estrutura condicional encadeada: `if-else if-else`
- Estrutura `switch-case`

### 4. Estruturas de Repetição - Laços (`loops/`)

- `01_while.c` - Laço while
- `02_do_while.c` - Laço do-while
- `03_for.c` - Laço for
- `04_lacos_aninhados.c` - Laços aninhados
- `05_break_continue.c` - Comandos break e continue

**Tópicos:**
- Laço de repetição: `while`
- Laço de repetição: `do-while`
- Laço de repetição: `for`
- Laços de repetição aninhados
- Comparação entre laços de repetição
- Comando `break`
- Comando `continue`

## Como compilar e executar

```bash
# Compilar um exemplo específico
cd unidade2/loops
gcc 03_for.c -o 03_for.out
./03_for.out

# Ou usar o Makefile
cd ../..
make
./unidade2/loops/03_for.out
```

## Exercícios sugeridos

1. Faça um programa que imprima os números pares de 1 a 100
2. Crie um programa que calcule o fatorial de um número usando while
3. Escreva um programa que imprima a tabuada de 1 a 10 usando laços aninhados
4. Faça um menu de opções usando switch-case
