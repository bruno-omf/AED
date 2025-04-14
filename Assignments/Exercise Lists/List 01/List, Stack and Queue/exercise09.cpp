// 9. Implementação de uma Fila com Vetor
// Implemente uma fila usando um vetor e forneça as seguintes operações:
// • enqueue: inserir um elemento no final da fila.
// • dequeue: remover um elemento do início da fila.
// • front: exibir o primeiro elemento.
// • isEmpty: verificar se a fila está vazia.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

#define MAX 100

typedef struct Queue {
    int data[MAX];
    int frontIndex;
    int rearIndex;
} Queue;

void initializeQueue(Queue* queue) {
    queue->frontIndex = 0;
    queue->rearIndex = -1;
}

void enqueue(Queue* queue, int value) {
    if (queue->rearIndex < MAX - 1) {
        queue->data[++(queue->rearIndex)] = value;
    } else {
        cout << "Fila cheia!" << endl;
    }
}

int dequeue(Queue* queue) {
    if (queue->frontIndex <= queue->rearIndex) {
        int value = queue->data[queue->frontIndex++];
        return value;
    }
    cout << "Fila vazia!" << endl;
    return -1;
}

int front(Queue* queue) {
    if (queue->frontIndex <= queue->rearIndex) {
        return queue->data[queue->frontIndex];
    }
    cout << "Fila vazia!" << endl;
    return -1;
}

bool isEmpty(Queue* queue) {
    return queue->frontIndex > queue->rearIndex;
}

int main() {
    Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    cout << "Primeiro elemento: " << front(&queue) << endl;
    cout << "Removendo elemento: " << dequeue(&queue) << endl;
    cout << "Primeiro elemento após dequeue: " << front(&queue) << endl;

    if (isEmpty(&queue)) {
        cout << "A fila está vazia." << endl;
    } else {
        cout << "A fila não está vazia." << endl;
    }

    return 0;
}
