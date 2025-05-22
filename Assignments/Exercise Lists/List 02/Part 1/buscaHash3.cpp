// 9. Hash com sondagem linear, buscar 37: Inserir 17, 27, 37, 47, 57

#include <iostream>

#define TAM 10
#define VAZIO -1
#define REMOVIDO -2

int tabelaHash[TAM];

void inicializaTabela() {

}

int funcaoHash() {

}

int inserir() {

}

int buscar() {

}

int remover() {

}

void imprimeTabela() {

}

int main() {
    // primeiro inicializar a tabela hash
    inicializaTabela();

    // depois buscar o numero 37 na tabela (que obviamente nao vai ter)
    int busca = 37;
    int posicao = buscar(busca);

    if (posicao != -1) {
        cout << "Elemento " << busca << " encontrado na posicao: " << posicao << endl;
    } else {
        cout << "Elemento " << busca << " nao encontrado." << endl;
    }

    // depois inserir os numeros 17, 27, 37, 47, 57
    inserir(17);
    inserir(27);
    inserir(37);
    inserir(47);
    inserir(57);

    // e por fim imprimir a tabela
    imprimeTabela();


    return 0;
}