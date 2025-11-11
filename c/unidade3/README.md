# Unidade III - Vetores e Matrizes

Esta unidade cobre arrays unidimensionais (vetores) e bidimensionais (matrizes) em C.

## Conteúdo

### 5. Vetores (`vectors/`)

- `01_vetor_basico.c` - Declaração, preenchimento e impressão de vetores
- `02_operacoes_vetor.c` - Operações com vetores (soma, média, maior, menor)
- `03_busca_vetor.c` - Busca linear em vetor

**Tópicos:**
- Introdução a vetores (arrays unidimensionais)
- Declaração e preenchimento de valores
- Impressão de vetor
- Operações com vetores

### 6. Matrizes (`matrices/`)

- `01_matriz_basica.c` - Declaração e preenchimento de matrizes
- `02_soma_matrizes.c` - Soma de duas matrizes
- `03_diagonal_matriz.c` - Diagonal principal de uma matriz

**Tópicos:**
- Matrizes (arrays bidimensionais)
- Manipulação de matrizes
- Acesso e operações comuns

## Como compilar e executar

```bash
# Compilar um exemplo específico
cd unidade3/vectors
gcc 02_operacoes_vetor.c -o 02_operacoes_vetor.out
./02_operacoes_vetor.out

# Ou usar o Makefile
cd ../..
make
./unidade3/vectors/02_operacoes_vetor.out
```

## Exercícios sugeridos

1. Crie um programa que ordene um vetor usando Bubble Sort
2. Faça um programa que multiplique duas matrizes
3. Escreva um programa que encontre o maior elemento de cada linha de uma matriz
4. Implemente uma busca binária em um vetor ordenado
