// 9. Registro de Pacientes
// Crie uma struct chamada Paciente, contendo:
// • Nome (string de até 50 caracteres)
// • Idade (inteiro)
// • Diagnóstico (string de até 100 caracteres)
// Crie uma função que recebe um vetor de Paciente e exibe todos os pacientes
// acima de 60 anos.
#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Paciente {
    char nome[50];
    int idade;
    char diagnostico[100];
}Paciente;

void exibePacienteIdade(Paciente* pacientes) {
    int idadePaciente;
    cout << "Voce deseja buscar um paciente a partir de qual idade?\n-> ";
    cin >> idadePaciente;

    cout << endl << "Estes sao os pacientes com idade maior ou igual a " << idadePaciente << "." << endl;
    cout << "-----------------------------" << endl;
    for (int i = 0; pacientes[i].idade >= idadePaciente; i++) {
        cout << "Nome do paciente: " << pacientes[i].nome << endl;
        cout << "Idade do paciente: " << pacientes[i].idade << endl;
        cout << "Diagnostico do paciente: " << pacientes[i].diagnostico << endl;
        cout << "-----------------------------" << endl;
    }

}

int main() {
    Paciente pacientes[3];

    cout << "-- Cadastro de Pacientes --" << endl;
    cout << "Informe nome, idade e o diagnostico deles." << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << "Nome do paciente " << i + 1 << ": ";
        cin.getline(pacientes[i].nome, 50);
        cout << "Idade do paciente " << i + 1 << ": ";
        cin >> pacientes[i].idade;
        cin.ignore(); // limpando o \n deixado no buffer dps de ler idade
        cout << "Diagnostico do paciente " << i + 1 << ": ";
        cin.getline(pacientes[i].diagnostico, 100);
        cout << "-----------------------------" << endl;
    }
    cout << "-- Cadastro realizado com sucesso! -- " << endl;
    exibePacienteIdade(pacientes);


    return 0;
}