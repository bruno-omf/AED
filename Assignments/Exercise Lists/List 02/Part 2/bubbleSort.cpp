// 10. Ordene o vetor: {9, 7, 5, 3, 1, 2, 4, 6, 8, 0}
// 11. Pare se já estiver ordenado: {1, 2, ..., 10}
// 12. Ordem decrescente: {12, 3, 45, 7, 18, 9, 25, 31, 6, 11}

#include <stdio.h>
#include <iostream>

#define TAM 10

using namespace std;

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void printCrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void printDecrescente(int vetor[], int tamanho) {
    for (int i = tamanho - 1; i >= 0; i--) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main () {

    int vet1[TAM] = {9, 7, 5, 3, 1, 2, 4, 6, 8, 0};
    int vet2[TAM] = {12, 3, 45, 7, 18, 9, 25, 31, 6, 11};
    
    // ordenar em ordem crescente e imprimir quando ordenado.
    bubbleSort(vet1, TAM);
    cout << "Vetor 1 ordenado em ordem crescente: ";
    printCrescente(vet1, TAM);

    // imprimir em ordem decrescente
    bubbleSort(vet2, TAM);
    cout << "Vetor 2 ordenado em ordem crescente: ";
    printDecrescente(vet2, TAM);

    return 0;
}