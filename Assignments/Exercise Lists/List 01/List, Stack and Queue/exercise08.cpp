// 8. Converter um Número Decimal para Binário Usando Pilha
// Crie um programa que converta um número decimal em binário usando uma
// pilha.
// Exemplo:
// entrada: 10 → saída: 1010
// entrada: 25 → saída: 11001
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

#define MAX 32

typedef struct Stack {
    int data[MAX];
    int top;
} Stack;

void initializeStack(Stack* stack) {
    stack->top = -1;
}

void push(Stack* stack, int value) {
    if (stack->top < MAX - 1) {
        stack->data[++(stack->top)] = value;
    }
}

int pop(Stack* stack) {
    if (stack->top >= 0) {
        return stack->data[(stack->top)--];
    }
    return -1;
}

void decimalToBinary(int number) {
    Stack stack;
    initializeStack(&stack);

    if (number == 0) {
        cout << "0" << endl;
        return;
    }

    while (number > 0) {
        push(&stack, number % 2);
        number /= 2;
    }

    while (stack.top >= 0) {
        cout << pop(&stack);
    }
    cout << endl;
}

int main() {
    int number1 = 10;
    int number2 = 25;

    decimalToBinary(number1);
    decimalToBinary(number2);

    return 0;
}
