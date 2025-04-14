// 12. Inverter uma Fila Usando uma Pilha
// Implemente uma função que recebe uma fila e inverte sua ordem usando uma
// pilha como estrutura auxiliar.
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 5

struct Queue {
    int data[MAX];
    int front, rear;
};

struct Stack {
    int data[MAX];
    int top;
};

void initializeQueue(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

void initializeStack(struct Stack *stack) {
    stack->top = -1;
}

bool isQueueEmpty(struct Queue *queue) {
    return (queue->front == -1);
}

bool isQueueFull(struct Queue *queue) {
    return (queue->rear == MAX - 1);
}

bool isStackEmpty(struct Stack *stack) {
    return (stack->top == -1);
}

bool isStackFull(struct Stack *stack) {
    return (stack->top == MAX - 1);
}

void enqueue(struct Queue *queue, int value) {
    if (isQueueFull(queue)) {
        cout << "Fila cheia! Não é possível inserir o elemento." << endl;
        return;
    }

    if (isQueueEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear = (queue->rear + 1);
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
        queue->front = (queue->front + 1);
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
    for (int i = queue->front; i <= queue->rear; i++) {
        cout << queue->data[i] << " ";
    }
    cout << endl;
}

void push(struct Stack *stack, int value) {
    if (isStackFull(stack)) {
        cout << "Pilha cheia! Não é possível empurrar o elemento." << endl;
        return;
    }

    stack->data[++stack->top] = value;
}

int pop(struct Stack *stack) {
    if (isStackEmpty(stack)) {
        cout << "Pilha vazia! Não há elementos para remover." << endl;
        return -1;
    }

    return stack->data[stack->top--];
}

void reverseQueue(struct Queue *queue) {
    struct Stack stack;
    initializeStack(&stack);

    while (!isQueueEmpty(queue)) {
        push(&stack, dequeue(queue));
    }

    while (!isStackEmpty(&stack)) {
        enqueue(queue, pop(&stack));
    }

    cout << "Fila invertida!" << endl;
}

int main() {
    struct Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 40);
    enqueue(&queue, 50);
    displayQueue(&queue);

    reverseQueue(&queue);
    displayQueue(&queue);

    return 0;
}
