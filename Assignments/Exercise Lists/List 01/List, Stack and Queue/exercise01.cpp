// 1. Implementação de uma Lista Encadeada Simples
// Crie um programa que implemente uma lista encadeada simples com as
// seguintes operações:
// • Inserir um elemento no início.
// • Inserir um elemento no final.
// • Remover um elemento específico.
// • Exibir todos os elementos da lista.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* insertAtStart(Node* root, int data) {

}

Node* insertAtEnd(Node* root, int data) {

}

Node* removeNode(Node* root, int data) {

}

void printList(Node* root) {

}

int main() {
    Node* root = NULL;

    root = insertAtStart(root, 10);
    root = insertAtStart(root, 40);
    root = insertAtStart(root, 70);
    printList(root);

    root = insertAtEnd(root, 20);
    root = insertAtEnd(root, 50);
    printList(root);

    removeNode(root, 70);
    printList(root);

}