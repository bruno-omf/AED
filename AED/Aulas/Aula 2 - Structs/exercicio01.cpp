/* COPRIGHT DE CÓDIGO DE BRUNO OLIVEIRA */
#include <stdio.h>
#include <iostream>

struct Data {
    int dia;
    char mes[10];
    int ano;
} typedef Data;

struct Funcionario {
    char nome[20];
    int idade;
    float salario;
    Data dataNascimento;
} typedef Func;

int main() {
    Func colaboradores[3];

    for (int i = 0; i < 3; i++) {
        std::cout << "Colaborador " << i + 1 << "\n";

        std::cout << "Informe o nome do colaborador: \n";
        std::cin >> colaboradores[i].nome;
        std::cout << "Informe a idade do colaborador: \n";
        std::cin >> colaboradores[i].idade;
        std::cout << "Informe o salario do colaborador: \n";
        std::cin >> colaboradores[i].salario;
        std::cout << "Informe o dia do nascimento colaborador: \n";
        std::cin >> colaboradores[i].dataNascimento.dia;
        std::cout << "Informe o mes do aniversário do colaborador: \n";
        std::cin >> colaboradores[i].dataNascimento.mes;
        std::cout << "Informe o ano do aniversário do colaborador: \n";
        std::cin >> colaboradores[i].dataNascimento.ano;

    }

    system("pause");

    // criar o codigo pra poder printar o que foi armazenado

    return 0;
}