// 16. Mostre após cada troca: {29, 10, 14, 37, 13, 40, 2, 7, 5, 18}
// 17. Conte trocas: {5, 4, 3, 2, 1, 6, 7, 8, 9, 10}
// 18. Ordem decrescente: {42, 33, 60, 15, 75, 12, 25, 90, 1, 6}

#include <stdio.h>
#include <iostream>

#define TAM 10

using namespace std;

void selectionSortPrintTrocas(int vetor[], int tamanho) {    
    for (int i = 0; i < tamanho; i++) {
        int menor = i;

        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j; 
            }
        }

        if (menor != i) { // so troca se o menor valor nao for o proprio "i". isso evita trocas desnecessarias.
            // achei o índice do menor valor dentro do vetor
            int temp = vetor[menor]; // guardo o menor valor dentro de temp
            vetor[menor] = vetor[i]; // coloco o menor valor na posição i
            vetor[i] = temp; // coloco o valor que estava na posição i na posição que antes era do menor valor, ou seja, faço essa troca.
            
            cout << "{";
            for (int k = 0; k < tamanho; k++) {
                cout << vetor[k] << " ";
            }
            cout << "}";
            cout << endl;
        }
    }
    cout << endl;
}

int selectionSortContaTrocas(int vetor[], int tamanho) {
    int trocas = 0;

    for (int i = 0; i < tamanho; i++) {
        int menor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }

        if (menor != i) {
            int temp = vetor[menor];
            vetor[menor]  = vetor[i];
            vetor[i] = temp;
            trocas++;
        }
    }
    return trocas;
}

void printaDecrescente(int vetor[], int tamanho) {
    cout << "{";
    for(int i = tamanho - 1; i >= 0; i--) {
        cout << vetor[i] << " ";
    }
    cout << "}" << endl;
}

int main () {
    int vet1[TAM] = {29, 10, 14, 37, 13, 40, 2, 7, 5, 18};
    int vet2[TAM] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
    int vet3[TAM] = {42, 33, 60, 15, 75, 12, 25, 90, 1, 6};

    cout << "Selection sort com impressao apos cada troca no vetor 1: " << endl;
    selectionSortPrintTrocas(vet1, TAM);

    int trocas = selectionSortContaTrocas(vet2, TAM);
    cout << "A quantidade de trocas realizadas no vetor 2 foram: " << trocas << " trocas" << endl;
    
    cout << endl;
    cout << "Selection sort com o array 3 em ordem decrescente: " << endl;
    selectionSortContaTrocas(vet3, TAM);
    printaDecrescente(vet3, TAM);

    return 0;
}