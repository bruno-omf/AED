// 10. Fila Circular
// Implemente uma fila circular usando um vetor para evitar desperdício de
// espaço quando houver remoção de elementos.
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 5

struct Queue {
    int data[MAX];
    int front, rear;
};

void initializeQueue(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

bool isQueueEmpty(struct Queue *queue) {
    return (queue->front == -1);
}

bool isQueueFull(struct Queue *queue) {
    return (queue->front == (queue->rear + 1) % MAX);
}

void enqueue(struct Queue *queue, int value) {
    if (isQueueFull(queue)) {
        cout << "Fila cheia! Não é possível inserir o elemento." << endl;
        return;
    }

    if (isQueueEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear = (queue->rear + 1) % MAX;
    queue->data[queue->rear] = value;
    cout << "Elemento " << value << " inserido na fila." << endl;
}

int dequeue(struct Queue *queue) {
    if (isQueueEmpty(queue)) {
        cout << "Fila vazia! Não é possível remover elementos." << endl;
        return -1;
    }

    int removed = queue->data[queue->front];
    
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX;
    }
    
    cout << "Elemento " << removed << " removido da fila." << endl;
    return removed;
}

void displayQueue(struct Queue *queue) {
    if (isQueueEmpty(queue)) {
        cout << "Fila vazia!" << endl;
        return;
    }

    cout << "Elementos na fila: ";
    int i = queue->front;
    while (i != queue->rear) {
        cout << queue->data[i] << " ";
        i = (i + 1) % MAX;
    }
    cout << queue->data[queue->rear] << endl;
}

int main() {
    struct Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    displayQueue(&queue);

    dequeue(&queue);
    displayQueue(&queue);

    enqueue(&queue, 40);
    enqueue(&queue, 50);
    enqueue(&queue, 60);
    displayQueue(&queue);

    return 0;
}
