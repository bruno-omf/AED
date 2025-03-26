#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* insertAtStart(Node* list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = list;

    return newNode;
}

Node* insertAtEnd(Node* list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    //if (list == NULL) return newNode;

    Node* temp = list; // cria um ponteiro temporário para percorrer a lista
    while (temp->next != NULL) { // percorre a lista até o último nó
        temp = temp->next; // avança para o próximo nó
    }
    temp->next = newNode; // adiciona o novo nó no fim da lista
    return list; // retorna o início da lista (head)
}

void printList(Node* list) {
    Node* current = list;
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* list = NULL;

    list = insertAtStart(list, 10);
    list = insertAtStart(list, 20);
    list = insertAtStart(list, 30);

    list = insertAtEnd(list, 40); // 30 -> 20 -> 10 -> 40 -> NULL
    list = insertAtEnd(list, 50); // 30 -> 20 -> 10 -> 40 -> 50 -> NULL

    printList(list);

    return 0;
}