// 6. Verificar se uma String é Palíndromo
// Implemente uma função recursiva que recebe uma string e retorna 1 se for um
// palíndromo e 0 caso contrário.
// Exemplo:
// • palindromo("arara") → 1
// • palindromo("casa") → 0
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

bool palindromo(char palavra[], int inicio, int fim) {
    if (inicio >= fim) { // caso base
        return true;
    }

    if (palavra[inicio] != palavra[fim]) {
        return false;
    }

    return palindromo(palavra, inicio + 1, fim - 1);
}

int main() {
    char palavra[50];
    bool resultado;

    cout << "Voce vai visualizar se uma palavra eh palindromo ou nao." << endl;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    int tamanho = strlen(palavra);

    resultado = palindromo(palavra, 0, tamanho - 1);
    cout << "A palavra eh palindromo?" << endl << "-> " << resultado << endl;;

    return 0;
}