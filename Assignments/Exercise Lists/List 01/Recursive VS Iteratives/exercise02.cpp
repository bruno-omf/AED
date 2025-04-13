// 2. Maior Elemento em um Vetor
// Crie uma função recursiva que recebe um vetor de inteiros e seu tamanho n e
// retorna o maior valor presente no vetor.
// Exemplo:
// int maior_elemento(int vet[], int n);
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int maiorElemento(int vetor[], int tamanho) {
    // caso base
    if (tamanho == 1) {
        return vetor[0];
    }
    // caso recursivo
    int maiorDoResto = maiorElemento(vetor, tamanho - 1);

    if (vetor[tamanho - 1] > maiorDoResto) {
        return vetor[tamanho - 1];
    } else {
        return maiorDoResto;
    }
}

int main() {
    int tamanho;
    int maior;

    cout << "Voce vai montar um vetor." << endl;
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

// questao maneira, gostei muito dessa.