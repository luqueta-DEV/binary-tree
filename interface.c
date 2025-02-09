#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int valor;
    struct Node* esquerda;
    struct Node* direita;
} Node;


Node* criarNo(int valor) {
    Node* novo = (Node*)malloc(sizeof(Node));
    if (novo) {
        novo->valor = valor;
        novo->esquerda = novo->direita = NULL;
    }
    return novo;
}


Node* inserir(Node* raiz, int valor) {
    if (raiz == NULL) return criarNo(valor);
    
    if (valor < raiz->valor)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    else if (valor > raiz->valor)
        raiz->direita = inserir(raiz->direita, valor);
    
    return raiz;
}


int buscar(Node* raiz, int valor) {
    if (raiz == NULL) return 0;  
    if (raiz->valor == valor) return 1;  
    
    if (valor < raiz->valor)
        return buscar(raiz->esquerda, valor);
    else
        return buscar(raiz->direita, valor);
}


Node* menorValor(Node* raiz) {
    while (raiz->esquerda != NULL)
        raiz = raiz->esquerda;
    return raiz;
}


Node* remover(Node* raiz, int valor) {
    if (raiz == NULL) return raiz;

    if (valor < raiz->valor)
        raiz->esquerda = remover(raiz->esquerda, valor);
    else if (valor > raiz->valor)
        raiz->direita = remover(raiz->direita, valor);
    else {
        if (raiz->esquerda == NULL) return raiz->direita;
        else if (raiz->direita == NULL) return raiz->esquerda;
        
        Node* temp = menorValor(raiz->direita);
        raiz->valor = temp->valor;
        raiz->direita = remover(raiz->direita, temp->valor);
    }
    return raiz;
}


void inOrder(Node* raiz) {
    if (raiz != NULL) {
        inOrder(raiz->esquerda);
        printf("%d ", raiz->valor);
        inOrder(raiz->direita);
    }
}
