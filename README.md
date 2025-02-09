# Projeto de Árvore Binária de Busca (BST) em C

Este projeto implementa uma **Árvore Binária de Busca (BST)** utilizando a linguagem de programação C. A árvore permite a inserção, remoção e busca de valores, além de realizar o percurso da árvore em ordem (in-order traversal).

## Estrutura do Projeto

O projeto é composto por três arquivos principais:

1. **`arvore.h`** - Arquivo de cabeçalho com as definições das funções e estrutura da árvore.
2. **`interface.c`** - Implementação das funções da árvore binária de busca.
3. **`main.c`** - Arquivo principal que demonstra a utilização das funções implementadas.

## Como Funciona?

A árvore binária de busca é uma estrutura de dados que organiza os valores de forma que, para cada nó:

- O valor do nó à esquerda é menor que o valor do nó.
- O valor do nó à direita é maior que o valor do nó.

As operações principais implementadas são:

- **Inserção**: Insere um valor na árvore, mantendo a propriedade da BST.
- **Busca**: Verifica se um valor existe na árvore.
- **Remoção**: Remove um valor da árvore e reorganiza os nós para manter a estrutura da BST.
- **Percurso em Ordem**: Exibe todos os valores da árvore de forma ordenada.

## Como Executar

### Pré-requisitos

Você precisará de um compilador C instalado no seu sistema. Caso esteja usando **Linux** ou **macOS**, você já tem o GCC instalado. Caso contrário, instale o GCC ou qualquer compilador C de sua preferência.

### Passos para Compilar e Executar

1. Clone o repositório ou baixe os arquivos do projeto.

2. Abra um terminal e navegue até o diretório onde os arquivos estão localizados.

3. Compile os arquivos C com o seguinte comando:

   ```bash
   gcc main.c interface.c -o arvore_bst
Saida + a criação de uma file chamada "programa"
 ```bash
Árvore em ordem: 20 30 40 50 60 70 80
Buscando 40: Encontrado
Árvore após remover 40: 20 30 50 60 70 80

