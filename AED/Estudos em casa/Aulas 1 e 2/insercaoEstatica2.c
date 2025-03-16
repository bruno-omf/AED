#include <stdio.h>

#define TAM 5

void insereNoArray(int array[], int *tamanho, int valor) {
    if (*tamanho < TAM) {
        array[*tamanho] = valor;
        (*tamanho)++; // incrementa corretamente o tamanho do array
    }
    else {
        printf("Array cheio.\n");
    }
}

int main() {
    int array[TAM] = {0};
    int tamanho = 0; // inicializando o contador

    insereNoArray(array, &tamanho, 30);
    insereNoArray(array, &tamanho, 35);
    insereNoArray(array, &tamanho, 40);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}