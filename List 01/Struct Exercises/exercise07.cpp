// Crie uma agenda telefônica usando structs, onde cada contato possui:
// • Nome (string de até 50 caracteres)
// • Telefone (string de até 15 caracteres)
// O programa deve permitir adicionar contatos e buscar um contato pelo nome.

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct Contato {
    char nome[50];
    char telefone[15];
} Contato;

Contato* adicionaContatos(int qtdContatos) {
    Contato* contatos = (Contato*)malloc(qtdContatos * sizeof(Contato));
    
    for (int i = 0; i < qtdContatos; i++) {
        cout << "Nome do contato " << i + 1 << ": " << endl;
        cin >> contatos[i].nome;
        cout << "Telefone do contato " << i + 1 << ": " << endl;
        cin >> contatos[i].telefone;
    }
    cout << "---- Contatos adicionados com sucesso! ----" << endl;
    
    return contatos;
}

void buscaContatos(Contato* contatos, char* nome, int qtdContatos) {
    for (int i = 0; i < qtdContatos; i++) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            cout << "Os dados do contato buscado sao:" << endl;
            cout << "-----------------" << endl;
            cout << "Nome: " << contatos[i].nome << endl;;
            cout << "Telefone: " << contatos[i].telefone << endl;
            cout << "-----------------" << endl;
        }
    }
}

int main() {
    Contato* contatos;
    char nomeContato[50];
    int qtdContatos;

    cout << "-- Agenda Telefonica --" << endl;
    cout << "Adicione seu contatos." << endl;
    cout << "Quantos contatos deseja cadastrar?\n-> ";
    cin >> qtdContatos;
    
    contatos = adicionaContatos(qtdContatos);

    cout << "- Sistema de Busca de Contatos -" << endl;
    cout << "Busque um contato pelo nome" << endl;
    cout << "Digite o nome do contato a ser buscado: ";
    cin >> nomeContato;

    buscaContatos(contatos, nomeContato, qtdContatos);

    free(contatos);

    return 0;
}