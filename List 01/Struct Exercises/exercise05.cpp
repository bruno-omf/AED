#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Funcionario {
    char nome[50];
    char cargo[30];
    float salario;
} Funcionario;

Funcionario* preencheDados(int qtdFunc) {
    Funcionario* funcionarios = (Funcionario*)malloc(sizeof(Funcionario) * qtdFunc);

    for (int i = 0; i < qtdFunc; i++) {
        cout << "Informe o nome do funcionario " << i + 1 << ": ";
        cin >> funcionarios[i].nome;
        cout << "O cargo do funcionario " << i + 1 << ": ";
        cin >> funcionarios[i].cargo;
        cout << "E por ultimo, o salario do funcionario " << i + 1 << ": ";
        cin >> funcionarios[i].salario;
    }
    return funcionarios;
}

void exibeFuncionarios(Funcionario* funcionarios, int qtdFunc) {
    cout << "Os dados dos " << qtdFunc << " funcionarios sao:" << endl;
    
    for (int i = 0; i < qtdFunc; i++) {
        cout << "Nome do funcionario " << i + 1 << ": " << funcionarios[i].nome << endl;
        cout << "Cargo do funcionario " << i + 1 << ": " << funcionarios[i].cargo << endl;
        cout << "Salario do funcionario " << i + 1 << ": " << funcionarios[i].salario << endl;
    }
}

int main() {
    int qtdFuncionarios;

    cout << "*** CADASTRO DE FUNCIONARIOS ***\n";
    cout << "Quantos funcionarios voce deseja cadastrar?\n-> ";
    cin >> qtdFuncionarios;

    Funcionario* funcionarios = preencheDados(qtdFuncionarios);
    exibeFuncionarios(funcionarios, qtdFuncionarios);

    free(funcionarios);

    return 0;
}