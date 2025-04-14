// 5. Implementação de uma Pilha com Vetor
// Implemente uma pilha usando um vetor e forneça as seguintes operações:
// • push: inserir um elemento no topo.
// • pop: remover o elemento do topo.
// • top: exibir o elemento do topo.
// • isEmpty: verificar se a pilha está vazia.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

#define MAX 100

typedef struct Stack {
    int data[MAX];
    int top;
} Stack;

void initializeStack(Stack* stack) {
    stack->top = -1;
}

void push(Stack* stack, int data) {
    if (stack->top < MAX - 1) {
        stack->data[++(stack->top)] = data;
    } else {
        cout << "Pilha cheia!" << endl;
    }
}

int pop(Stack* stack) {
    if (stack->top >= 0) {
        return stack->data[(stack->top)--];
    } else {
        cout << "Pilha vazia!" << endl;
        return -1;
    }
}

int top(Stack* stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top];
    } else {
        cout << "Pilha vazia!" << endl;
        return -1;
    }
}

bool isEmpty(Stack* stack) {
    return stack->top == -1;
}

int main() {
    Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    cout << "Topo da pilha: " << top(&stack) << endl;

    cout << "Removendo topo: " << pop(&stack) << endl;

    cout << "Topo da pilha após pop: " << top(&stack) << endl;

    if (isEmpty(&stack)) {
        cout << "A pilha está vazia." << endl;
    } else {
        cout << "A pilha não está vazia." << endl;
    }

    return 0;
}
