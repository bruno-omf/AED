// 3. Inserção Ordenada na Lista Encadeada
// Altere a implementação da lista encadeada para que os elementos sejam
// inseridos em ordem crescente automaticamente.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* insertOrdered(Node* head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    if (head == NULL || head->data >= data) { // se o head for null ou o valor do head for maior ou igual do que eu quero inserir:
        newNode->next = head; // o novo nó vai apontar para o head, porque o novo nó agora é o menor valor.
        return newNode; // retorna o novo nó, que é o head.
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data < data) { // se o proximo nó nao for nulo e o valor do próximo nó for menor que o valor do nó que estamos querendo inserir:
        temp = temp->next; // percorre a lista até encontrar o lugar certo para inserir o novo nó (se ele for maior que o nó atual e menor que o próximo nó).
    }

    newNode->next = temp->next; // o novo nó vai apontar para o próximo nó.
    temp->next = newNode; // o nó atual vai apontar para o novo nó.

    return head;
}

Node* removeNode(Node* head, int data) {
    if (head->data == data) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != data) {
        temp = temp->next;
    }

    if (temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        free(toDelete);
    }

    return head;
}

// void countListElements(Node* head) {
//     int i = 0;
//     while (head != NULL) {
//         head = head->next;
//         i++;
//     }
//     cout << "A lista tem " << i << " elementos." << endl;
// }

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

    head = insertOrdered(head, 10);
    head = insertOrdered(head, 40);
    head = insertOrdered(head, 70);
    printList(head);

    head = insertOrdered(head, 20);
    head = insertOrdered(head, 50);
    printList(head);

    //countListElements(head);

    head = removeNode(head, 40);
    printList(head);

    return 0;
}