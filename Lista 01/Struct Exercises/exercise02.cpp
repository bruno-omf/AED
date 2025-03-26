// Crie um vetor de 5 elementos da struct Aluno, que contém:
// • Nome (string de até 50 caracteres)
// • Matrícula (inteiro)
// • Nota (float)
// Solicite ao usuário que insira os dados dos 5 alunos e depois exiba a média das
// notas.

#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Aluno {
    char nome[50];
    int idade;
    float nota;
} Aluno;

void preencheAluno(Aluno arrayAlunos[]) {
    for (int i = 0; i < 5; i++) {
        cout << "Informe o nome do aluno " << i + 1 << ": ";
        cin.ignore();
        cin.getline(arrayAlunos[i].nome, 50);
        cout << "A idade do aluno " << i + 1 << ": ";
        cin >> arrayAlunos[i].idade;
        cout << "E a nota do aluno " << i << ": ";
        cin >> arrayAlunos[i].nota;
        cout << endl;
    }
}

float calculaMedia(Aluno arrayAlunos[]) {
    float somaNotas;
    float media;

    for (int i = 0; i < 5; i++) {
        somaNotas = somaNotas + arrayAlunos[i].nota;
    }
    return media = somaNotas / 5;
}

void exibeMedia(float media) {
    cout << "A media dos 5 alunos eh de: " << media << endl;
}

int main() {
    Aluno arrayAlunos[4];

    preencheAluno(arrayAlunos);
    float media = calculaMedia(arrayAlunos);
    exibeMedia(media);

    return 0;
}