// Crie uma struct chamada Carro, com os seguintes campos:
// • Modelo (string de até 30 caracteres)

// • Ano (inteiro)
// • Preço (float)
// No programa, declare um ponteiro para uma struct Carro e use malloc() para
// alocar memória dinamicamente. Preencha os dados e exiba as informações antes
// de liberar a memória com free().
#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Carro {
    char modelo[30];
    int ano;
    float preco;
} Carro;

void exibeDados(Carro carro) {
    cout << "\n\nOs dados do carro sao:\nModelo: " << carro.modelo << endl;
    cout << "Ano: " << carro.ano << endl;
    cout << "Preco: " << carro.preco << endl;
}

int main() {
    Carro* carro1 = (Carro*)malloc(sizeof(Carro));

    cout << "Preencha dos dados do carro.\nModelo do carro: ";
    cin >> carro1->modelo;
    cout << "Ano de lancamento: ";
    cin >> carro1->ano;
    cout << "Preco do carro: ";
    cin >> carro1->preco;

    exibeDados(*carro1);
    free(carro1);

    return 0;
}