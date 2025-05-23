// 10. Ordene o vetor: {9, 7, 5, 3, 1, 2, 4, 6, 8, 0}
// 11. Pare se já estiver ordenado: {1, 2, ..., 10}
// 12. Ordem decrescente: {12, 3, 45, 7, 18, 9, 25, 31, 6, 11}

#include <stdio.h>
#include <iostream>

#define TAM 10

using namespace std;

void bubbleSort(int vetor[], int tamanho) {

}

void printCrescente(int vetor[], int tamanho) {

}

void printDecrescente(int vetor[], int tamanho) {

}

int main () {

    int vet1[TAM] = {9, 7, 5, 3, 1, 2, 4, 6, 8, 0};
    int vet2[TAM] = {12, 3, 45, 7, 18, 9, 25, 31, 6, 11};
    
    // ordenar em ordem crescente e imprimir quando ordenado.
    bubbleSort(vet1, TAM);
    cout << "Vetor 1 ordenado em ordem crescente: ";
    printCrescente(resultado1, TAM);

    // imprimir em ordem decrescente
    bubbleSort(vet2, TAM);
    cout << "Vetor 2 ordenado em ordem crescente: ";
    printDecrescente(resultado2, TAM);

    return 0;
}