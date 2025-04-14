// 10. Transformar Produto de Dois Números em Iterativo
// Pegue a função do exercício 4 e implemente uma versão iterativa que calcula
// o produto usando apenas somas sucessivas.
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int produto(int numero, int vezes) {
    int resultado = 0;

    for (int i = 0; i < vezes; i++) {
        resultado = resultado + numero;
    }
    return resultado;
}

int main() {
    int numero, vezes, resultado;

    cout << "Voce vai calcular o produto de dois numeros inteiros." << endl;
    cout << "Digite o primeiro numero: ";
    cin >> numero;

    cout << "Digite quantas vezes quer multiplicar esse numero inserido: ";
    cin >> vezes;

    resultado = produto(numero, vezes);
    cout << "O resultado da operacao : " << numero << "x" << vezes << " eh: " << resultado << endl;
    return 0;
}