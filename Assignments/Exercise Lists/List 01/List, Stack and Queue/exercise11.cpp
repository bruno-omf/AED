// 11. Simular Atendimento em um Banco Usando Fila
// Crie um programa que simule uma fila de atendimento bancário, aonde os
// clientes chegam e são atendidos na ordem de chegada.
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 5

struct CustomerQueue {
    int data[MAX];
    int front, rear;
};

void initializeQueue(struct CustomerQueue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

bool isQueueEmpty(struct CustomerQueue *queue) {
    return (queue->front == -1);
}

bool isQueueFull(struct CustomerQueue *queue) {
    return (queue->front == (queue->rear + 1) % MAX);
}

void enqueue(struct CustomerQueue *queue, int customerId) {
    if (isQueueFull(queue)) {
        cout << "Fila cheia! Não é possível inserir o cliente." << endl;
        return;
    }

    if (isQueueEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear = (queue->rear + 1) % MAX;
    queue->data[queue->rear] = customerId;
    cout << "Cliente " << customerId << " entrou na fila de atendimento." << endl;
}

int dequeue(struct CustomerQueue *queue) {
    if (isQueueEmpty(queue)) {
        cout << "Fila vazia! Não há clientes para atender." << endl;
        return -1;
    }

    int servedCustomer = queue->data[queue->front];
    
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX;
    }
    
    cout << "Cliente " << servedCustomer << " foi atendido." << endl;
    return servedCustomer;
}

void displayQueue(struct CustomerQueue *queue) {
    if (isQueueEmpty(queue)) {
        cout << "Fila vazia!" << endl;
        return;
    }

    cout << "Clientes na fila: ";
    int i = queue->front;
    while (i != queue->rear) {
        cout << queue->data[i] << " ";
        i = (i + 1) % MAX;
    }
    cout << queue->data[queue->rear] << endl;
}

int main() {
    struct CustomerQueue queue;
    initializeQueue(&queue);

    enqueue(&queue, 101);
    enqueue(&queue, 102);
    enqueue(&queue, 103);
    displayQueue(&queue);

    dequeue(&queue);
    displayQueue(&queue);

    enqueue(&queue, 104);
    enqueue(&queue, 105);
    enqueue(&queue, 106);
    displayQueue(&queue);

    return 0;
}
