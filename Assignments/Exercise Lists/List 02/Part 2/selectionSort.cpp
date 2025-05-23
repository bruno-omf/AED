// 16. Mostre após cada troca: {29, 10, 14, 37, 13, 40, 2, 7, 5, 18}
// 17. Conte trocas: {5, 4, 3, 2, 1, 6, 7, 8, 9, 10}
// 18. Ordem decrescente: {42, 33, 60, 15, 75, 12, 25, 90, 1, 6}

#include <stdio.h>
#include <iostream>

#define TAM 10

using namespace std;

void selectionSortPrintTrocas(int vetor[], int tamanho) {

}

int selectionSortContaTrocas() {

}

void printaDecrescente() {

}

int main () {
    int vet1[TAM] = {29, 10, 14, 37, 13, 40, 2, 7, 5, 18};
    int vet2[TAM] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
    int vet3[TAM] = {42, 33, 60, 15, 75, 12, 25, 90, 1, 6};

    cout << "Selection sort com impressao apos cada troca no vetor 1: " << endl;
    selectionSortPrintTrocas(vet1, TAM);

    cout << "Selection sort com contador de trocas feitas: " << endl;
    int trocas = selectionSortContaTrocas(vet2, TAM);
    cout << "A quantidade de trocas realizadas no vetor 2 foram: " << trocas << endl;
    
    cout << "Selection sort com o array 3 em ordem decrescente: " << endl;
    selectionSortContaTrocas(vet3, TAM);
    printaDecrescente(vet3, TAM);

    return 0;
}