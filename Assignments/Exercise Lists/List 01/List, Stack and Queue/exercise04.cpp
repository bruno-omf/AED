// 4. Reverter uma Lista Encadeada
// Implemente uma função que inverte a ordem dos elementos de uma lista
// encadeada sem criar uma nova lista.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

Node* insertAtEnd(Node* head, int data) {
    Node* newNode = createNode(data);
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}

Node* reverseList(Node*head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) { // enquanto a lista não estiver vazia
        next = current->next; // armazeno o próximo nó
        current->next = prev; // o nó atual aponta para o nó anterior
        prev = current; // o nó anterior agora é o nó atual
        current = next; // passo para o próximo nó
    }
    return prev; // o novo head é o último nó que foi processado
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 50);

    cout << "Lista original: ";
    printList(head);

    head = reverseList(head);
    cout << "Lista invertida: ";
    printList(head);
}