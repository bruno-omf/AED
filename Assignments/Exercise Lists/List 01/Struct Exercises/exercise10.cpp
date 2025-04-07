// 10. Sistema Bancário Simples
// Crie uma struct chamada ContaBancaria, contendo:
// • Nome do titular (string de até 50 caracteres)
// • Número da conta (inteiro)
// • Saldo (float)
// Crie funções para:
// • Depositar um valor na conta
// • Sacar um valor da conta (apenas se houver saldo suficiente)
// • Exibir o saldo
// No main(), crie uma conta bancária e permita que o usuário realize operações.
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct ContaBancaria {
    char nome[50];
    int numero;
    float saldo;
} Conta;

void deposito(Conta* conta, float valorDeposito) {
    conta->saldo = conta->saldo + valorDeposito;
    cout << "Deposito de " << valorDeposito << " realizado!" <<endl;
}

void saque(Conta* conta, float valorSaque) {
    // se o saldo for suficiente, sacar
    if (valorSaque <= conta->saldo) {
        conta->saldo = conta->saldo - valorSaque;
        cout << "Saque de " << valorSaque << " realizado!" <<endl;
    } else {
        cout << "Saque bloqueado.\nVoce nao possui o saldo que quer sacar." << endl;
    }
}

void exibeSaldo(Conta* conta) {
    cout << "Voce tem um saldo de R$" << conta->saldo << " na conta!" << endl;
}

void menu(Conta* conta) {
    int opcao = -1;
    float  valorDeposito;
    float valorSaque;

    while (opcao != 0) {
        cout << "------------------------------------" << endl;
        cout << "Qual operacao deseja fazer?" << endl;
        cout << "1. Depositar um valor." << endl;
        cout << "2. Sacar um valor." << endl;
        cout << "3. Exibir saldo." << endl;
        cout << "0. Sair." << endl;
        cin >> opcao;
        cout << "------------------------------------" << endl;
        switch (opcao) {
            case 1:
                cout << "Opcao escolhida foi deposito." << endl << "Digite o valor do deposito." << endl;
                cout << "Valor: ";
                cin >> valorDeposito;
                deposito(conta, valorDeposito);
                break;
            case 2:
                cout << "Opcao escolhida foi saque."<< endl << "Digite o valor do saque." << endl;
                cout << "Valor: ";
                cin >> valorSaque;
                saque(conta, valorSaque);
                break;
            case 3:
                cout << "Opcao escolhida foi exibir saldo." << endl;
                exibeSaldo(conta);
                break;
            case 0:
                cout << "Saindo do menu," << endl;
                break;
            default:
                cout << "Opcao invalida. tente novamente." << endl;
                break;
        }
    }
}

int main() {
    Conta* conta1 = (Conta*)malloc(sizeof(Conta));

    cout << "---- Sistema Bancario ----" << endl;
    cout << "Crie sua conta." << endl;
    cout << "Nome do titular: ";
    cin.ignore();
    cin.getline(conta1->nome, 50);
    cout << "Numero da conta: ";
    cin >> conta1->numero;
    cout << "Saldo da conta: ";
    cin >> conta1->saldo;

    menu(conta1);
    free(conta1);

    return 0;
}