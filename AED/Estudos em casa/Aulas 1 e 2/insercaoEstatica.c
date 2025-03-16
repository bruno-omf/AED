// Inserção de elementos em um array estático de tamanho 5 (0-4).
#include <stdio.h>

#define TAM 5

void inserirArray(int array[], int *tamanho, int valor) {
    if (*tamanho < TAM) {
        array[*tamanho] = valor;
        (*tamanho)++;
    } else {
        printf("Array cheio!\n");
    }
}

int main() {
    int array[TAM] = {0}; // inicializa todas as posições do array com 0
    int tamanho = 0;

    inserirArray(array, &tamanho, 10); // Passa o endereço da variável tamanho para a função inserirArray para que ela possa incrementar o valor
    inserirArray(array, &tamanho, 20);

    for (int i = 0; i < tamanho; i++)
        printf("%d ", array[i]); // Imprime o array

    return 0;
}