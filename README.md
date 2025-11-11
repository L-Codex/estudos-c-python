# Estudos de C e Python

Repositório com exemplos didáticos de C e Python organizados por unidades de estudo, seguindo o currículo de Programação Estruturada. Material para revisar e praticar para provas e entrevistas.

## Estrutura do Repositório

```
.
├── c/                          # Exemplos em C (organizados por unidades)
│   ├── unidade1/              # Fundamentos e Operadores
│   │   ├── basics/            # Estrutura de programas, tipos de dados, printf/scanf
│   │   └── operators/         # Operadores aritméticos, relacionais, lógicos
│   ├── unidade2/              # Controle de Fluxo e Laços
│   │   ├── conditionals/      # if, if-else, switch-case
│   │   └── loops/             # while, do-while, for, break, continue
│   ├── unidade3/              # Arrays
│   │   ├── vectors/           # Vetores (arrays unidimensionais)
│   │   └── matrices/          # Matrizes (arrays bidimensionais)
│   ├── unidade4/              # Funções, Ponteiros e Arquivos
│   │   ├── functions/         # Funções, recursão, escopo
│   │   ├── pointers/          # Ponteiros e aritmética de ponteiros
│   │   └── files/             # Manipulação de arquivos
│   ├── Makefile               # Compilação automatizada
│   └── README.md              # Guia completo das unidades
├── python/                     # Exemplos em Python
│   ├── basics/                # Fundamentos Python
│   ├── functions/
│   ├── data_structures/
│   ├── oop/
│   ├── files/
│   ├── algorithms/
│   ├── exceptions/
│   └── testing/
├── docs/                       # Documentação adicional
│   └── estruturas_de_dados.md
├── .gitignore
├── LICENSE
└── README.md
```

## Conteúdo do Curso de C

### Unidade I - Fundamentos e Operadores
- Estrutura de um programa em C
- Tipos de dados básicos (int, float, double, char)
- Comandos `printf()` e `scanf()`
- Identificadores e variáveis
- Operadores: aritméticos, relacionais, lógicos, incremento/decremento

### Unidade II - Controle de Fluxo e Laços
- Estruturas condicionais: `if`, `if-else`, `if-else if-else`
- Estrutura `switch-case`
- Laços de repetição: `while`, `do-while`, `for`
- Laços aninhados
- Comandos `break` e `continue`

### Unidade III - Arrays
- Vetores (arrays unidimensionais)
- Declaração, preenchimento e operações
- Matrizes (arrays bidimensionais)
- Manipulação de matrizes

### Unidade IV - Funções, Ponteiros e Arquivos
- Definição e chamada de funções
- Passagem de parâmetros (por valor e por referência)
- Escopo de variáveis
- Recursão
- Ponteiros e aritmética de ponteiros
- Manipulação de arquivos (leitura e escrita)

## Como usar

### Compilar todos os exemplos em C
```bash
cd c
make
```

### Compilar e executar um exemplo específico
```bash
cd c/unidade1/basics
gcc 01_hello_world.c -o 01_hello_world.out
./01_hello_world.out
```

### Executar exemplos já compilados
```bash
cd c
./unidade1/basics/01_hello_world.out
./unidade2/loops/03_for.out
./unidade3/vectors/02_operacoes_vetor.out
./unidade4/functions/01_funcoes_basicas.out
```

### Limpar arquivos compilados
```bash
cd c
make clean
```

### Python
Executar um script:
```bash
python python/basics/hello.py
```

Rodar testes:
```bash
python -m unittest discover -s python
```

## Estruturas de dados
Consulte o guia em [docs/estruturas_de_dados.md](docs/estruturas_de_dados.md) para resumo de Pilha (LIFO), Fila (FIFO) e Árvore Binária de Busca (BST).

Bom estudo! 🚀
