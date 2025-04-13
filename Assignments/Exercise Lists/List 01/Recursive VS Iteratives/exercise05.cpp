// 5. Contagem Regressiva
// Crie uma função recursiva que recebe um número n e imprime uma contagem
// regressiva até 0.
// Exemplo: contagem_regressiva(5) → 5, 4, 3, 2, 1, 0.
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void contagemRegressiva(int numero) {
    if (numero < 0) {
        return;
    } else {
        cout << numero << " ";
        contagemRegressiva(numero - 1);
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