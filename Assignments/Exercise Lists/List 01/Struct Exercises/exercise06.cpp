// Crie uma struct chamada Livro, que contenha:
// • Título (string de até 50 caracteres)
// • Autor (string de até 50 caracteres)
// • Ano de publicação (inteiro)
// Crie uma função que recebe um vetor de Livro e exibe os livros publicados após
// um determinado ano (definido pelo usuário).
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct Livro {
    char titulo[50];
    char autor[50];
    int anoPub;
} Livro;

void exibeLivroPublicacao(Livro* livros) {
    int anoPubli;
    cout << "** Sistema de busca **" << endl;
    cout << "A partir de qual ano voce deseja buscar livros?\n-> ";
    cin >> anoPubli;

    cout << "Os livros publicados a partir de " << anoPubli << " sao: " << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < 3; i++) {
        if (livros[i].anoPub >= anoPubli) {
            cout << "Titulo: " << livros[i].titulo << endl;
            cout << "Autor: " << livros[i].autor << endl;
            cout << "Ano de publicacao: " << livros[i].anoPub << endl;
            cout << "------------------------" << endl;
        }
    }
}

int main() {
    Livro livros[3];

    cout << "-- Bem vindo a biblioteca --" << endl;
    cout << "Cadastre 3 livros: " << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Titulo do livro " << i + 1 << ": ";
        cin >> livros[i].titulo;
        cout << "Autor do livro " << i + 1 << ": ";
        cin >> livros[i].autor;
        cout << "Ano de publicacao do livro " << i + 1 << ": ";
        cin >> livros[i].anoPub;
    }
    cout << "-- Cadastro realizado com sucesso! -- " << endl;

    exibeLivroPublicacao(livros);

    return 0;
}