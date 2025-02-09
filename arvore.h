#ifndef ARVORE_H
#define ARVORE_H

typedef struct Node Node;

Node * inserir (Node* raiz, int valor);
int Buscar(Node * raiz, int valor);
Node * remover (Node * raiz, int  valor);
void InOrder(Node * raiz);

#endif


