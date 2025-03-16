#include <stdio.h>
#include <iostream>

struct Aluno {
    char nome[20];
    float notaMat;
    float notaFis;
    float media;

} typedef Aluno;

int main() {
    Aluno aluno[3];

    for (int i = 0; i < 3; i++) {
        std::cout << "Informe o nome do aluno: \n";
        std::cin >> aluno[i].nome;
        std::cout << "Informe a nota de matematica do aluno: \n";
        std::cin >> aluno[i].notaMat;
        std::cout << "Informe a nota de fisica do aluno: \n";
        std::cin >> aluno[i].notaFis;
        aluno[i].media = (aluno[i].notaMat + aluno[i].notaFis) / 2;
    }

    // printar os valores armazenados
    for (int i = 0; i < 3; i++) {
        std::cout << "O nome do aluno eh: " << aluno[i].nome << "\n";
        std::cout << "A media desse aluno eh: " << aluno[i].media << "\n";
    }

    return 0;
}