#include <stdio.h>
#include <iostream>

using namespace std;

struct Produto {
    //string nome;
    char nome[20];
    float preco;
    int qtdCompra;
} typedef Produto;

// procedimento que calcula o valor total das vendas
void calcExibeVendas(Produto produtos[], int numProdutos) {
    float total = 0;
    for (int i = 0; i < numProdutos; i++) {
        total = total + (produtos[i].preco * produtos[i].qtdCompra);
    }
    cout << "O valor total das vendas é de: R$" << total << endl;
}

int main () {
    int NUM_PRODUTOS = 10;
    
    Produto produtos[NUM_PRODUTOS];
    //ler 10 produtos
    for (int i = 0; i < NUM_PRODUTOS; i++) {
        cout << "Informe o nome do " << i + 1 << "° produto: \n" << endl;
        cin >> produtos[i].nome;
        cout << "Agora informe o preco deste produto: \n" << endl;
        cin >> produtos[i].preco;
        cout << "Por fim, informe a quantidade deste produto que foi comprada: \n" << endl;
        cin >> produtos[i].qtdCompra;

        //cin.ignore();
    }
    //chamar o procedimento que calcula e printa o valor total das vendas realizadas
    //enviar o array de produtos e o numero de produtos para o procedimento
    calcExibeVendas(produtos, NUM_PRODUTOS);
    system("pause");

    return 0;
}