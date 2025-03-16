#include <string.h>
#include <iostream>

using namespace std;

void reverteString(char *str, int inicio, int fim) {
    char temp;
    while (inicio <= fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char str[100];


    cout << "Informe uma string de ate 100 caracteres: ";
    cin.getline(str, 100);

    reverteString(str, 0, strlen(str) - 1);
    cout << "A string revertida eh: " << str << endl; 

    return 0;
}