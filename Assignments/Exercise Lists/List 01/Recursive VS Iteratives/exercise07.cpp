// 7. Transformar Contagem Regressiva em Iterativa
// Pegue a função recursiva do exercício 5 e implemente uma versão iterativa
// usando for ou while.
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void contagemRegressiva(int numero) {
    while (numero >= 0) {
        cout << numero << " ";
        numero --;
    }
}

int main() {
    int numero;

    cout << "Voce vai visualizar uma contagem regressiva." << endl;
    cout << "Digite um numero: ";
    cin >> numero;

    cout << "A contagem regressiva partindo do numero " << numero << " eh: ";
    contagemRegressiva(numero);
    cout << endl;

    return 0;
}