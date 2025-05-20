// 1. Encontre o número 25 no vetor: {15, 8, 25, 7, 12, 18, 5, 9, 30, 3}
// 2. Conte quantas vezes o número 7 aparece no vetor: {7, 3, 5, 7, 9, 2, 7, 1, 4, 6}
// 3. Busque o número 55 e retorne o índice ou -1: {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}

#include <stdio.h>
#include <iostream>

using namespace std;

int buscaSequencial(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i ++) {
        if (vetor[i] == valor) {
            return i;
        }
    }
    return -1;
}

int contaOcorrencias(int vetor[], int tamanho, int valor) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            contador++;
        }
    }
    return contador;
}

void printResultado(int i, int valor) {
    if (i == -1) {
        cout << "O valor " << valor << " nao foi encontrado. ";
        cout << "O retorno da funcao eh: " << i << endl;
    } else {
        cout << "O numero " << valor <<" foi encontrado na posicao " << i << " do vetor." << endl;
    }
}

int main () {
    int indice1, indice2, tamanho = 10, ocorrencias;
    int valor1 = 25, valor2 = 7, valor3 = 55;
    int vet1[] = {15, 8, 25, 7, 12, 18, 5, 9, 30, 3};
    int vet2[] = {7, 3, 5, 7, 9, 2, 7, 1, 4, 6};
    int vet3[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    indice1 = buscaSequencial(vet1, tamanho, valor1); // 1. primeiro caso
    ocorrencias = contaOcorrencias(vet2, tamanho, valor2); // 2. segundo caso
    indice2 = buscaSequencial(vet3, tamanho, valor3); // 3. terceiro caso

    printResultado(indice1, valor1); // 1. primeiro caso
    cout << "A quantidade de ocorrencias do numero 7 no vetor 2 eh " << ocorrencias << "." << endl; // 2. segundo caso
    printResultado(indice2, valor3); // 3. terceiro caso

    return 0;
}