#include <iostream>
#include <string>   // Necessário para std::string
using namespace std;

struct Produto {
    string nome;     // Usando std::string para permitir espaços
    float preco;
    int qtdCompra;
};

void calcExibeVendas(Produto produtos[], int numProdutos) {
    float total = 0;
    for (int i = 0; i < numProdutos; i++) {
        total += produtos[i].preco * produtos[i].qtdCompra;
    }
    cout << "O valor total das vendas é de: R$" << total << endl;
}

int main () {
    const int NUM_PRODUTOS = 10;
    Produto produtos[NUM_PRODUTOS];

    for (int i = 0; i < NUM_PRODUTOS; i++) {
        cout << "Informe o nome do " << i + 1 << "° produto: " << endl;
        getline(cin, produtos[i].nome);
        
        cout << "Agora informe o preco deste produto: " << endl;
        cin >> produtos[i].preco;
        
        cout << "Por fim, informe a quantidade deste produto que foi comprada: " << endl;
        cin >> produtos[i].qtdCompra;
        
        // Limpar o buffer para que o getline do próximo produto funcione corretamente
        cin.ignore();
    }
    
    calcExibeVendas(produtos, NUM_PRODUTOS);
    system("pause");

    return 0;
}
