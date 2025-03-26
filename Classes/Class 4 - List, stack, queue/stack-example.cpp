#include <iostream>
#include <stdio.h>

typedef struct Stack {
    int data;
    struct Stack* next;
} Stack;

Stack* push(int value, Stack* top) {
    Stack * newStack = (Stack*)malloc(sizeof(Stack));
    newStack->data = value;
    newStack->next = top;

    return newStack;
}

Stack* pop(Stack* top) {
    if (top == NULL) {
        return NULL;
    }
    Stack* temp = top; // guarda o topo da pilha
    top = top->next; // o topo da pilha agora é o proximo elemento
    free(temp); // libera o antigo topo da pilha

    return top; // retorna o novo topo da pilha
}

void printStack(Stack* top) {
    Stack* current = top;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Stack* top = NULL;

    top = push(10, top);
    top = push(20, top);
    top = push(30, top);
    printStack(top);

    top = pop(top);
    top = pop(top);
    printStack(top);

    return 0;
}