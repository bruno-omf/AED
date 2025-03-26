#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Funcionario {
    char nome[50];
    char cargo[30];
    float salario;
} Funcionario;



int main() {
    int qtdFuncionarios;

    cout << "*** CADASTRO DE FUNCIONARIOS ***";
    cout << "Quantos funcionarios voce deseja cadastrar?\n-> ";
    cin >> qtdFuncionarios;



    return 0;
}