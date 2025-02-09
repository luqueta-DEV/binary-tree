#include <iostream>
using namespace std;

struct Node {
    int valor;
    Node* esquerda; //apontando pra esquerda
    Node* direita;  //apontando pra direita

    Node(int v) {
        valor = v;
        esquerda = direita = nullptr;
    }
};


Node* inserir(Node* raiz, int valor) {
    if (raiz == nullptr) return new Node(valor);
    
    if (valor < raiz->valor)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    else if (valor > raiz->valor)
        raiz->direita = inserir(raiz->direita, valor);
    
    return raiz;
}


bool buscar(Node* raiz, int valor) {
    if (raiz == nullptr) return false;
    if (raiz->valor == valor) return true;
    
    if (valor < raiz->valor)
        return buscar(raiz->esquerda, valor);
    else
        return buscar(raiz->direita, valor);
}


Node* menorValor(Node* raiz) {
    while (raiz->esquerda != nullptr)
        raiz = raiz->esquerda;
    return raiz;
}


Node* remover(Node* raiz, int valor) {
    if (raiz == nullptr) return raiz;

    if (valor < raiz->valor)
        raiz->esquerda = remover(raiz->esquerda, valor);
    else if (valor > raiz->valor)
        raiz->direita = remover(raiz->direita, valor);
    else {
        if (raiz->esquerda == nullptr) return raiz->direita;
        else if (raiz->direita == nullptr) return raiz->esquerda;
        
        Node* temp = menorValor(raiz->direita);
        raiz->valor = temp->valor;
        raiz->direita = remover(raiz->direita, temp->valor);
    }
    return raiz;
}


void inOrder(Node* raiz) {
    if (raiz != nullptr) {
        inOrder(raiz->esquerda);
        cout << raiz->valor << " ";
        inOrder(raiz->direita);
    }
}

int main() {
    Node* raiz = nullptr;
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    cout << "Árvore em ordem: ";
    inOrder(raiz);
    cout << endl;

    cout << "Buscando 40: " << (buscar(raiz, 40) ? "Encontrado" : "Não encontrado") << endl;
    
    raiz = remover(raiz, 40);
    cout << "Árvore após remover 40: ";
    inOrder(raiz);
    cout << endl;

    return 0;
}
