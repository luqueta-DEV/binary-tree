#include <stdio.h>
#include "arvore.h"

int main() {
    Node* raiz = NULL;
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    printf("Árvore em ordem: ");
    inOrder(raiz);
    printf("\n");

    printf("Buscando 40: %s\n", buscar(raiz, 40) ? "Encontrado" : "Não encontrado");
    
    raiz = remover(raiz, 40);
    printf("Árvore após remover 40: ");
    inOrder(raiz);
    printf("\n");

    return 0;
}
