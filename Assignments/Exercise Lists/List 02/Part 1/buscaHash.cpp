// 7. Hash sem colisão com módulo 10: {15, 25, 35, 45, 55}
// 8. Hash com colisão por lista encadeada, buscar 22: Inserir 12, 22, 32, 42
// 9. Hash com sondagem linear, buscar 37: Inserir 17, 27, 37, 47, 57

#include <stdio.h>
#include <iostream>
#define TAM 10

int tabelaHash[TAM];

using namespace std;

int funcaoHash(int chave) {
    return chave % TAM;
}

void inserir(int chave) {
    int indice = funcaoHash(chave);
    tabelaHash[indice] = chave;
}

int buscar(int chave) {
    int indice = funcaoHash(chave);
    if (tabelaHash[indice] == chave) {
        return indice;
    } else {
        return -1;
    }
}

int main () {

    for (int i = 0; i < TAM; i++) {
        tabelaHash[i] = -1;
    }

    inserir(15);
    inserir(25);
    inserir(35);
    // inserir(45);
    // inserir(55);

    int valor = 25;
    int posicao = buscar(valor);

    if (posicao != -1) {
        cout << "Valor: " << valor << " encontrado na posicao hash: " << posicao << endl;
    } else {
        cout << "Valor nao encontrado na tabela hash." << endl;
    }

    return 0;
}