// 4. Encontre o valor 13 no vetor: {2, 4, 6, 8, 10, 12, 13, 14, 16, 18}
// 5. Conte quantas comparações para encontrar 100: {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}
// 6. Retorne posição de inserção do 27: {5, 10, 15, 20, 25, 30, 35, 40, 45, 50}

#include <stdio.h>
#include <iostream>

using namespace std;

int buscaBinaria(int vetor[], int tamanho, int valor) { // implementar
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;
    
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {
            return meio;
        } else if (vetor[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int contaComparacoes(int vetor[], int tamanho, int valor) {
    int contador = 0;
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while (inicio <= fim) {
        contador++;
        meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {
            return contador;
        } else if (vetor[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return contador;
}

int retornaPosicaoInsercao(int vetor[], int tamanho, int valor) { // implementar
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;
    
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {
            return meio;
        } else if (vetor[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return inicio;
}

void printResultado(int i, int valor) {
    if (i == -1) {
        cout << "O valor " << valor << " nao foi encontrado. ";
    } else {
        cout << "O numero " << valor <<" foi encontrado na posicao " << i << " do vetor." << endl;
    }
}

int main () {
    int valor1 = 13, valor2 = 100, valor3 = 27, tamanho = 10;
    int primeiroCaso, segundoCaso, terceiroCaso;
    int vetor1[] = {2, 4, 6, 8, 10, 12, 13, 14, 16, 18};
    int vetor2[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int vetor3[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    primeiroCaso = buscaBinaria(vetor1, tamanho, valor1);
    segundoCaso = contaComparacoes(vetor2, tamanho, valor2);
    terceiroCaso = retornaPosicaoInsercao(vetor3, tamanho, valor3);

    printResultado(primeiroCaso, valor1); // 1. primeiro caso
    cout << "A quantidade de comparacoes feitas pra encontrar o valor " << valor2 << " foi: " << segundoCaso << " ." << endl; // 2. segundo caso
    cout << "A posicao de insercao do valor " << valor3 << " é dada pelo índice [" << terceiroCaso << "] do array." << endl; // 3. terceiro caso

    return 0;
}