// 3. Soma dos Dígitos de um Número
// Implemente uma função recursiva que recebe um número inteiro n e retorna a
// soma de seus dígitos.
// Exemplo: soma_digitos(1234) → 1 + 2 + 3 + 4 = 10.
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int somaDigitos(int numero) {
    if (numero == 0) {
        return 0;
    } else {
        return (numero % 10) + somaDigitos(numero / 10); // qualquer numero % 10, o resultado do resto vai ser igual ao digito no campo da "unidade" do numero. 734219 % 10 = 9.
        }
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