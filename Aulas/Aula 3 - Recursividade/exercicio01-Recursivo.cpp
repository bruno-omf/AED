#include <iostream>
#include <string.h>

using namespace std;

void reverteString(char *str, int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }

    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;

    reverteString(str, inicio + 1, fim - 1);
}

int main() {
    char str[100];
    cout << "Informe uma string de ate 100 caracteres: ";
    cin.getline(str, 100);

    reverteString(str, 0, strlen(str) - 1);
    cout << "String reversa: " << str << endl;

    return 0;
}