#include <iostream>
#include <string.h>

using namespace std;

void reverteString(char *str, int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }

    cout << "Trocando '" << str[inicio] << "' (posicao " << inicio << ") com '" << str[fim] << "' (posicao " << fim << ")" << endl;

    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;

    cout << "String atual: " << str << endl;

    reverteString(str, inicio + 1, fim - 1);
}

int main() {
    char str[100];
    cout << "Informe uma string de ate 100 caracteres: ";
    cin.getline(str, 100);

    cout << "\nIniciando a inversao da string...\n" << endl;
    reverteString(str, 0, strlen(str) - 1);
    cout << "\nString reversa final: " << str << endl;

    return 0;
}
