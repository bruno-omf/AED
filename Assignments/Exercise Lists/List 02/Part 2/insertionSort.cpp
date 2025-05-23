// 13. Ordene: {22, 11, 99, 88, 9, 7, 42, 65, 33, 10}
// 14. Ordene apenas pares: {9, 8, 3, 4, 7, 6, 1, 2, 5, 0}
// 15. Ordem decrescente: {30, 20, 10, 40, 50, 70, 60, 90, 80, 100}

#include <stdio.h>
#include <iostream>

#define TAM 10

using namespace std;

void insertionSort(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i ++) {
        int chave = vetor[i];
        int j = i - 1;
        
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--; // decrementa o J pra sair do loop
        }
        vetor[j + 1] = chave;
    }
}

void sortEvenOnly(int vetor[], int tamanho) {
    // Passo 1: extrair pares
    int pares[TAM];
    int countPares = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            pares[countPares++] = vetor[i];
        }
    }

    // Passo 2: ordenar vetor de pares
    insertionSort(pares, countPares);

    // Passo 3: substituir pares ordenados no vetor original
    int indexPar = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            vetor[i] = pares[indexPar++];
        }
    }
}

void printaSortEvenOnly(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void printCrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void printDecrescente(int vetor[], int tamanho) {
    for (int i = tamanho - 1; i >=0 ; i--) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main () {
    int vet1[TAM] = {22, 11, 99, 88, 9, 7, 42, 65, 33, 10};
    int vet2[TAM] = {9, 8, 3, 4, 7, 6, 1, 2, 5, 0};
    int vet3[TAM] = {30, 20, 10, 40, 50, 70, 60, 90, 80, 100};

    // ordenar o 1° vetor e printar
    insertionSort(vet1, TAM);
    cout << "Vetor 1 ordenado: ";
    printCrescente(vet1, TAM);

    // ordenar apenas valores pares no 2° vetor e printar
    sortEvenOnly(vet2, TAM);
    cout << "Vetor 2, ordenando apenas os valores pares: ";
    printaSortEvenOnly(vet2, TAM);

    // ordenar o 3° vetor e printar em ordem decrescente
    insertionSort(vet3, TAM);
    cout << "Vetor 3 ordenado e printado em ordem decrescente: ";
    printDecrescente(vet3, TAM);

    return 0;
}