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

}

Node* insertAtEnd(Node* head, int data) {

}

Node* reverseList(Node*head) {

}

void printList(Node* head) {

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