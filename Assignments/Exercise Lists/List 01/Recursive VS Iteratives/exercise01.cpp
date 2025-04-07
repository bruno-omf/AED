// 1. Número de Dígitos de um Inteiro
// Implemente uma função recursiva que recebe um número inteiro n e retorna a
// quantidade de dígitos que ele possui.
// Exemplo:
// • contar_digitos(12345) → 5
// • contar_digitos(7) → 1
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int contarDigitos(int numero) {
    // caso base
    if (numero < 10) {
        return 1;
    }

    // caso recursivo
    return 1 + contarDigitos(numero / 10);
}

int main() {
    int numero, qtDigitos;
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    qtDigitos = contarDigitos(numero);

    cout << "A quantidade de digitos do numero " << numero << " eh: " << qtDigitos;

    return 0;
}