#include <stdio.h>
#include <iostream>

struct dadosAluno {
    char nome[20];
    float notaMat;
    float notaFis;
    float media;

} typedef Aluno;

int main() {
    Aluno aluno01, aluno02, aluno03;

    std::cout << "Informe o nome do aluno: \n";
    std::cin >> aluno01.nome;
    std::cout << "Informe a nota de matematica aluno: \n";
    std::cin >> aluno01.notaMat;
    std::cout << "Informe a nota de fisica aluno: \n";
    std::cin >> aluno01.notaFis;
    aluno01.media = aluno01.notaMat + aluno01.notaFis;

    std::cout << "Informe o nome do aluno: \n";
    std::cin >> aluno02.nome;
    std::cout << "Informe a nota de matematica aluno: \n";
    std::cin >> aluno02.notaMat;
    std::cout << "Informe a nota de fisica aluno: \n";
    std::cin >> aluno02.notaFis;
    aluno02.media = aluno02.notaMat + aluno02.notaFis;
    
    std::cout << "Informe o nome do aluno: \n";
    std::cin >> aluno03.nome;
    std::cout << "Informe a nota de matematica aluno: \n";
    std::cin >> aluno03.notaMat;
    std::cout << "Informe a nota de fisica aluno: \n";
    std::cin >> aluno03.notaFis;
    aluno03.media = aluno03.notaMat + aluno03.notaFis;


    //printar os valores armazenados de cada um dos 3 alunos.
    
    return 0;
}