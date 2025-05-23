// 8. Hash com colisão por lista encadeada, buscar 22: Inserir 12, 22, 32, 42

#include <iostream>
#include <stdlib.h>

#define TAM 10

using namespace std;

typedef struct No {
    int chave;
    struct No* prox;
} No;

No* tabelaHash[TAM];

void inicializaTabela() {
    for (int i = 0; i < TAM; i++) {
        tabelaHash[i] = NULL;
    }
}

int funcaoHash(int chave) {
    return chave % TAM;
}

void inserir() {

}

No* buscar(int chave) {
    int indice = funcaoHash(chave);

    No* atual = tabelaHash[indice];

    while (atual != NULL) {
        if (atual->chave == chave) {
            return atual;
        }
        atual = atual->prox;
    }
    return NULL; // não encontrou.
}

void imprimeTabela() {

}

int main() {
    inicializaTabela();

    int busca = 22;
    No* resultado = buscar(busca);

    if (resultado) {
        cout << "Elemento: " << resultado->chave << " encontrado na tabela hash" << endl;
    } else {
        cout << "Elemento nao encontrado na tabela hash." << endl;
    }

    // inserir(12);
    // inserir(22);
    // inserir(32);
    // inserir(42);

    // imprimeTabela();

    return 0;
}