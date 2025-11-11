# Unidade I - Fundamentos e Operadores

Esta unidade cobre os fundamentos da programação estruturada em C e operadores básicos.

## Conteúdo

### 1. Programação Estruturada em C (`basics/`)

- `01_hello_world.c` - Estrutura básica de um programa em C
- `02_tipos_dados.c` - Tipos de dados básicos (int, float, double, char)
- `03_scanf_exemplo.c` - Entrada de dados com scanf()

**Tópicos:**
- Estrutura de um programa em C
- Tipos de dados básicos em C
- Comandos `printf()` e `scanf()`
- Identificadores e variáveis
- Boas práticas em programação C

### 2. Operadores Básicos (`operators/`)

- `01_aritmeticos.c` - Operadores aritméticos (+, -, *, /, %)
- `02_relacionais_logicos.c` - Operadores relacionais (==, !=, <, >, <=, >=) e lógicos (&&, ||, !)
- `03_incremento_decremento.c` - Operadores de incremento (++) e decremento (--)

**Tópicos:**
- Operadores de atribuição
- Operadores aritméticos
- Operadores relacionais
- Operadores lógicos
- Operadores de incremento/decremento

## Como compilar e executar

```bash
# Compilar um exemplo específico
cd unidade1/basics
gcc 01_hello_world.c -o 01_hello_world.out
./01_hello_world.out

# Ou usar o Makefile na raiz do diretório c/
cd ../..
make
./unidade1/basics/01_hello_world.out
```

## Exercícios sugeridos

1. Crie um programa que calcule a área de um círculo dado o raio
2. Faça um programa que converta temperatura de Celsius para Fahrenheit
3. Escreva um programa que leia dois números e mostre qual é o maior
