// Crie uma struct chamada Pessoa, que contém os seguintes campos:
// • Nome (string de até 50 caracteres)
// • Idade (inteiro)
// • Altura (float)
// No programa principal, declare uma variável do tipo Pessoa, preencha os dados
// do usuário via teclado e exiba as informações.

#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Pessoa {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    Pessoa pessoa1;

    cout << "Informe o nome da pessoa, a idade e a altura: " << endl;
    cin >> pessoa1.nome >> pessoa1.idade >> pessoa1.altura;

    cout << "Nome: " << pessoa1.nome << "\nIdade: " << pessoa1.idade << "\nAltura: " << pessoa1.altura << endl;

    return 0;
}