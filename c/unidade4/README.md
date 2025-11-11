# Unidade IV - Funções, Ponteiros e Manipulação de Arquivos

Esta unidade cobre funções, ponteiros e manipulação de arquivos em C.

## Conteúdo

### 7. Funções (`functions/`)

- `01_funcoes_basicas.c` - Definição e chamada de funções
- `02_passagem_parametros.c` - Passagem por valor e por referência
- `03_escopo_variaveis.c` - Escopo de variáveis (locais e globais)
- `04_recursao.c` - Funções recursivas

**Tópicos:**
- Funções em C
- Chamada de funções
- Passagem de parâmetros
- Escopo de variáveis
- Aplicações de funções em C

### 8. Ponteiros (`pointers/`)

- `01_ponteiros_basicos.c` - Definição e uso básico de ponteiros
- `02_ponteiros_arrays.c` - Relação entre ponteiros e arrays

**Tópicos:**
- Definição e uso de ponteiros em C
- Operadores & (endereço) e * (conteúdo)
- Ponteiros e arrays
- Aritmética de ponteiros

### 8. Manipulação de Arquivos (`files/`)

- `01_escrita_arquivo.c` - Escrita em arquivo
- `02_leitura_arquivo.c` - Leitura de arquivo
- `03_append_arquivo.c` - Adicionar dados ao final de um arquivo

**Tópicos:**
- Manipulação de arquivos
- Leitura e escrita em arquivos
- Modos de abertura (r, w, a)
- Funções fopen(), fclose(), fprintf(), fscanf(), fgets()

## Como compilar e executar

```bash
# Compilar um exemplo específico
cd unidade4/functions
gcc 01_funcoes_basicas.c -o 01_funcoes_basicas.out
./01_funcoes_basicas.out

# Ou usar o Makefile
cd ../..
make
./unidade4/functions/01_funcoes_basicas.out
```

## Exercícios sugeridos

1. Crie uma função que calcule o n-ésimo número de Fibonacci
2. Implemente uma função que inverta um vetor usando ponteiros
3. Faça um programa que salve e leia dados de alunos (nome, matrícula, notas) em um arquivo
4. Escreva uma função recursiva para calcular a soma dos elementos de um vetor
