// 9. Hash com sondagem linear, buscar 37: Inserir 17, 27, 37, 47, 57

#include <iostream>

#define TAM 10
#define VAZIO -1
#define REMOVIDO -2

using namespace std;

int tabelaHash[TAM];

void inicializaTabela() {
    for (int i = 0; i < TAM; i++) {
        tabelaHash[i] = VAZIO;
    }
}

int funcaoHash(int chave) {
    return chave % TAM;
}

int inserir(int chave) {
    int indice = funcaoHash(chave);

    for (int i = 0; i < TAM; i++) {
        int tentativa = (indice + i) % TAM;

        if (tabelaHash[tentativa] == VAZIO || tabelaHash[tentativa] == REMOVIDO) {
            tabelaHash[tentativa] = chave;
            return tentativa; // inserido com sucesso!
        }
    }
    return -1; // tabela cheia
}

int buscar(int chave) { // busca com sondagem linear
    int indice = funcaoHash(chave); // indice 7 (passando 37 como chave)

    for (int i = 0; i < TAM; i++) { // vai procurando do indice 7 em diante se o valor foi inserido.
        int tentativa = (indice + i) % TAM; // se passar do indice 9, a tentativa é = 10. quando a tentativa é = 10, o modulo é 0, logo, o elemento vai ser adicionado no indice 0 da tabela hash. MUITO MASSA!

        if (tabelaHash[tentativa] == VAZIO) {
            return -1; // nao encontrado (nunca foi inserido)
        }

        if (tabelaHash[tentativa] == chave) {
            return tentativa; // foi encontrado, retorna onde a chave se encontra
        }
        return -1; // nao foi encontrado mesmo apos percorrer toda a tabela.
    }

}

int remover() {

}

void imprimeTabela() {
    cout << "Tabela Hash: " << endl;
    for (int i = 0; i < TAM; i++) {
        cout << tabelaHash[i] << endl;
    }
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
        cout << "Elemento " << busca << " nao encontrado na tabela." << endl;
    }

    // depois inserir os numeros 17, 27, 37, 47, 57
    inserir(17);
    inserir(27);
    inserir(37);
    inserir(47);
    inserir(57);

    // // e por fim imprimir a tabela
    imprimeTabela();


    return 0;
}