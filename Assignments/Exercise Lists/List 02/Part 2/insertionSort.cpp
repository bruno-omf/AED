// 13. Ordene: {22, 11, 99, 88, 9, 7, 42, 65, 33, 10}
// 14. Ordene apenas pares: {9, 8, 3, 4, 7, 6, 1, 2, 5, 0}
// 15. Ordem decrescente: {30, 20, 10, 40, 50, 70, 60, 90, 80, 100}

#include <stdio.h>
#include <iostream>

#define TAM 10

using namespace std;

void insertionSort(int vetor[], int tamanho) {

}

void insertionSortEven(int vetor[], int tamanho) {

}

void printCrescente(int vetor[], int tamanho) {

}

void printDecrescente(int vetor[], int tamanho) {

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
    insertionSortEven(vet2, TAM);
    cout << "Vetor 2, ordenando apenas os valores pares: ";
    printCrescente(vet2, TAM);

    // ordenar o 3° vetor e printar em ordem decrescente
    insertionSort(vet3, TAM);
    cout << "Vetor 3 ordenado e printado em ordem decrescente: ";
    printDecrescente(vet3, TAM);

    return 0;
}