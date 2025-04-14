// 8. Transformar Maior Elemento em Iterativo
// Pegue a função recursiva do exercício 2 e implemente uma versão iterativa
// para encontrar o maior elemento do vetor.
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int maiorElemento(int vetor[], int tamanho) {
    int maior = vetor[0];

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int tamanho;
    int maior;

    cout << "Voce vai montar um vetor de inteiros." << endl;
    cout << "Informe o tamanho do vetor: ";
    cin >> tamanho;

    int vetor[tamanho];
    cout << "Agora informe os elementos do vetor: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Posicao " << i << ": ";
        cin >> vetor[i];
    }
    
    cout << "Vetor preenchido." << endl;

    maior = maiorElemento(vetor, tamanho);
    cout << "O maior valor armazenado no vetor eh: " << maior << endl;

    return 0;
}