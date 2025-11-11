# Programação Estruturada em C

Este repositório segue a estrutura do curso de Programação Estruturada em C, organizado em 4 unidades principais.

## Estrutura do Curso

### Unidade I - Fundamentos e Operadores
- **1. Programação Estruturada em C**
  - Estrutura de um programa em C
  - Tipos de dados básicos
  - Comandos `printf()` e `scanf()`
  - Identificadores e variáveis
  - Boas práticas em programação C

- **2. Operadores Básicos**
  - Operadores de atribuição
  - Operadores aritméticos
  - Operadores relacionais
  - Operadores lógicos
  - Operadores de incremento/decremento

### Unidade II - Controle de Fluxo
- **3. Operações e Controle de Fluxo**
  - Estrutura condicional: `if`
  - Estruturas condicionais: `if-else`
  - Estrutura condicional encadeada: `if-else if-else`

- **4. Estruturas de Repetição (Laços)**
  - Laço `while`
  - Laço `do-while`
  - Laço `for`
  - Laços aninhados
  - Comandos `break` e `continue`
  - Estrutura `switch-case`

### Unidade III - Arrays
- **5. Vetores**
  - Introdução a vetores (arrays unidimensionais)
  - Declaração e preenchimento
  - Operações com vetores

- **6. Matrizes**
  - Matrizes (arrays bidimensionais)
  - Manipulação de matrizes

### Unidade IV - Funções e Ponteiros
- **7. Funções**
  - Funções em C
  - Passagem de parâmetros
  - Escopo de variáveis
  - Aplicações de funções

- **8. Ponteiros e Manipulação de Arquivos**
  - Definição e uso de ponteiros
  - Manipulação de arquivos
  - Leitura e escrita em arquivos

## Como usar este repositório

### Compilar exemplos
```bash
cd c
make
```

### Executar um exemplo específico
```bash
cd c/unidade1/basics
gcc hello.c -o hello.out
./hello.out
```

### Limpar arquivos compilados
```bash
cd c
make clean
```

## Navegação

- `c/unidade1/` - Fundamentos e operadores
- `c/unidade2/` - Controle de fluxo e laços
- `c/unidade3/` - Vetores e matrizes
- `c/unidade4/` - Funções, ponteiros e arquivos
- `docs/` - Documentação adicional
- `python/` - Exemplos em Python (estrutura similar)

## Boas práticas

1. Sempre compile com warnings: `gcc -Wall -Wextra`
2. Use nomes de variáveis descritivos
3. Comente código complexo
4. Teste seu código com diferentes entradas
5. Libere memória alocada dinamicamente

---

Para mais informações sobre estruturas de dados, consulte [docs/estruturas_de_dados.md](docs/estruturas_de_dados.md).

Bom estudo! 🚀
