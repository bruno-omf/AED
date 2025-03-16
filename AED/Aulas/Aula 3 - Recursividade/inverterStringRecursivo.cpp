//inversao de uma string
#include <iostream>
#include <string.h>

void inverterString(char str[], int inicio, int fim) {
    if (inicio >= fim) 
        return;
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverterString(str, inicio + 1, fim - 1);
}

void inverterStringIterativa(char str[]) {
    int inicio = 0, fim = strlen(str) - 1;
    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char str[] = "recursao";
    char strn[] = "mauricio";
    inverterString(str, 0, strlen(str) - 1);
    std::cout << "String invertida: " << str << ".\n";
    inverterStringIterativa(str);
    std::cout << "String invertida: " << strn << ".\n";
    return 0;
}