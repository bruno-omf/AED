// 4. Produto de Dois Números Usando Somas Sucessivas
// Implemente uma função recursiva que calcula o produto de dois números
// inteiros a e b apenas usando somas sucessivas (sem usar *).
// Exemplo:
// • produto(5, 3) → 5 + 5 + 5 = 15
// • produto(7, 2) → 7 + 7 = 14
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int produto(int numero, int vezes) {
    if (numero == 0 || vezes == 0) {
        return 0;
    } else {
        return numero + produto(numero, vezes - 1);
    }
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