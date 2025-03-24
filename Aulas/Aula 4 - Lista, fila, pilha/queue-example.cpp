#include <stdio.h>
#include <iostream>

typedef struct Queue {
    int data;
    struct Queue* next;
} Queue;

Queue* enqueue(int value, Queue* end) { //insere no fim da fila
    Queue* newQueue = (Queue*)malloc(sizeof(Queue));
    newQueue->data = value;
    newQueue->next = NULL;

    if (end != NULL) { // se a fila não estiver vazia
        end->next = newQueue; // adiciona o novo nó no fim da fila
    }
    return newQueue; // se estiver vazia, retorna o novo nó
}

Queue* dequeue(Queue* start) { //remove do início da fila
    if (start == NULL) {
        return NULL;
    }
    Queue* temp = start;
    start = start->next;
    free(temp);

    return start;
}

void printQueue(Queue* start) {
    Queue* current = start;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Queue* start = NULL;
    Queue* end = NULL;

    end = enqueue(10, end);
    start = end; // início da fila é o mesmo que o fim

    end = enqueue(20, end); // 10 -> 20 -> NULL
    end = enqueue(30, end);
    end = enqueue(40, end);
    end = enqueue(50, end);
    printQueue(start); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    start = dequeue(start); // remove o 10
    printQueue(start); // 20 -> 30 -> 40 -> 50 -> NULL

    return 0;
}