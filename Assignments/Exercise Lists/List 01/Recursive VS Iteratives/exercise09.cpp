// 9. Transformar Soma dos Dígitos em Iterativo
// Pegue a função do exercício 3 e implemente uma versão iterativa que calcula
// a soma dos dígitos.
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int somaDigitos(int numero) {
    int soma = 0;

    while (numero > 0) {
        soma = soma + numero % 10; // adiciona o digito da "unidade" do numero à soma
        numero = numero / 10; // remove o ultimo digito do numero
    }
    return soma;
}

int main() {
    int numero;
    int soma;

    cout << "Voce vai somar os digitos de um numero." << endl;
    cout << "Digite um numero: ";
    cin >> numero;

    soma = somaDigitos(numero);
    cout << "A soma dos digitos do numero " << numero << " eh: " << soma << endl;

    return 0;
}