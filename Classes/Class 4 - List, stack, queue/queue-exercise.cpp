#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

typedef struct Node {
    char name[20];
    struct Node* next;
} Node;


Node* enqueue(const char name[], Node* end) { // passar como parametro o valor e o fim da fila
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->next = NULL;
    
    if (end == NULL) {
        return newNode;
    } else {
        end->next = newNode;
        return newNode;
    }
}

Node* dequeue(Node* start) { // passar como parametro o começo da fila
    if (start == NULL) {
        return NULL;
    } else {
        Node* temp = start;
        start = start->next;
        free(temp);
        return start;
    }
}

void printQueue(Node* start) { // passar como parametro o head da fila
    if (start == NULL) {
        cout << "Fila vazia!" << endl;
    } else {
        Node* current = start;
        while (current != NULL) {
            cout << current->name << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
    cout << endl;
}

int main() {
    Node* start = NULL;
    Node* end = NULL;

    end = enqueue("Ana", end);
    start = end;

    end = enqueue("Bruno", end);
    end = enqueue("Carlos", end);
    printQueue(start);

    start = dequeue(start);
    printQueue(start);

    return 0;
}