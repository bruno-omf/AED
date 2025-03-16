#include <stdio.h>

void causar_stack_overflow() {
    int x = 0; // Variável local para consumir espaço na pilha
    printf("Stack frame: %p\n", (void*)&x); // Imprime o endereço do frame atual
    causar_stack_overflow(); // Chamada recursiva infinita
}

int main() {
    printf("Iniciando o programa para causar stack overflow...\n");
    causar_stack_overflow();
    return 0;
}