#include <iostream>
#include <stdlib.h>

//criar o no
typedef struct Node {
    int data;
    struct Node* next;
} Node;

//inserir no inicio
Node* insertAtStart(int value, Node* head) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // alocamos a memoria para um novo nó
    newNode->data = value; // valor recebido do parametro
    newNode->next = head; // ponteiro para o proximo nó

    return newNode; // retorna um novo nó.
}

//inserir no final
Node* insertAtEnd(int value, Node* head) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

//imprimir todos os elementos da lista
void printList(Node* head) {
    Node* current = head;
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {

    Node* head = NULL; //definindo o ponteiro da lista como NULL

    //chamar a funcao de inserir no inicio
    head = insertAtStart(10, head);
    head = insertAtStart(20, head);
    head = insertAtStart(30, head);
    //chamar a funcao de inserir no final
    head = insertAtEnd(40, head);
    head = insertAtEnd(50, head);
    //chamar o procedimento de imprimir a lista completa
    printList(head);

    return 0;
}