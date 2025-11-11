# Estruturas de Dados

Este documento fornece um resumo das principais estruturas de dados implementadas neste repositório.

## Pilha (Stack) - LIFO

**Last In, First Out** - O último elemento inserido é o primeiro a ser removido.

### Operações principais:
- `push(item)`: Adiciona um item no topo da pilha
- `pop()`: Remove e retorna o item do topo
- `peek()`/`top()`: Retorna o item do topo sem remover
- `isEmpty()`: Verifica se a pilha está vazia

### Implementações:
- Array-based: Usa um array fixo ou dinâmico
- Linked list-based: Usa nós encadeados

### Complexidade:
- Push: O(1)
- Pop: O(1)
- Peek: O(1)

### Casos de uso:
- Avaliação de expressões
- Backtracking (desfazer/refazer)
- Chamadas de função (call stack)

## Fila (Queue) - FIFO

**First In, First Out** - O primeiro elemento inserido é o primeiro a ser removido.

### Operações principais:
- `enqueue(item)`: Adiciona um item no final da fila
- `dequeue()`: Remove e retorna o item do início
- `front()`/`peek()`: Retorna o item do início sem remover
- `isEmpty()`: Verifica se a fila está vazia

### Implementações:
- Array-based: Usa um array circular
- Linked list-based: Usa nós encadeados

### Complexidade:
- Enqueue: O(1)
- Dequeue: O(1)
- Front: O(1)

### Casos de uso:
- Processamento de tarefas em ordem
- BFS (Breadth-First Search)
- Buffers e streams

## Árvore Binária de Busca (BST)

Uma árvore binária onde cada nó tem no máximo dois filhos e:
- Valores menores ficam à esquerda
- Valores maiores ficam à direita

### Operações principais:
- `insert(value)`: Insere um novo valor
- `search(value)`: Busca um valor
- `delete(value)`: Remove um valor
- `inorder()`: Percorre em ordem (esquerda, raiz, direita)
- `preorder()`: Percorre em pré-ordem (raiz, esquerda, direita)
- `postorder()`: Percorre em pós-ordem (esquerda, direita, raiz)

### Complexidade (árvore balanceada):
- Busca: O(log n)
- Inserção: O(log n)
- Remoção: O(log n)

### Complexidade (pior caso - desbalanceada):
- Busca: O(n)
- Inserção: O(n)
- Remoção: O(n)

### Casos de uso:
- Busca eficiente em dados ordenados
- Implementação de dicionários
- Sistemas de prioridade

## Referências

Para mais detalhes, consulte as implementações nos diretórios:
- `c/data_structures/`: Implementações em C
- `python/data_structures/`: Implementações em Python
