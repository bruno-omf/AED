// Crie uma struct chamada Produto, que contém:
// • Nome do produto (string de até 30 caracteres)
// • Código (inteiro)
// • Preço (float)
// Crie uma função que recebe um Produto como parâmetro e exibe seus dados
// formatados. No main(), instancie um produto, peça ao usuário que insira seus
// valores e chame a função para exibir os dados.

#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Produto {
    char nome[30];
    int codigo;
    float preco;
} Produto;

Produto exibeDados(Produto produto) {
    cout << "\nOs dados do produto sao: \nNome do produto: " << produto.nome << endl;
    cout << "Codigo do produto: " << produto.codigo << endl;
    cout << "Preco do produto: " << produto.preco << endl;
}

int main() {
    Produto produto1;

    cout << "Informe o nome do produto: ";
    cin >> produto1.nome;
    cout << "Informe o codigo do produto: ";
    cin >> produto1.codigo;
    cout << "Informe o preco do pedido: ";
    cin >> produto1.preco;

    exibeDados(produto1);

    return 0;
}