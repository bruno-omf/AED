// 6. Verificar se uma Expressão com Parênteses Está Correta
// Crie uma função que recebe uma string contendo ( e ) e verifica se os
// parênteses estão balanceados.
// Exemplo:
// entrada: "(())()" → saída: Válido
// entrada: "(()" → saída: Inválido
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

// função para verificar se os parênteses estão balanceados
bool isBalanced(const char* expression) {
    int balance = 0;  // variável para acompanhar o número de parênteses abertos e fechados

    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(') {
            balance++;  // incrementa se encontrar um parêntese aberto
        } else if (expression[i] == ')') {
            balance--;  // decrementa se encontrar um parêntese fechado
        }

        // se em algum momento o balance ficar negativo, significa que há mais ')' do que '('
        if (balance < 0) {
            return false;
        }
    }

    // se balance for 0, os parênteses estão balanceados
    return balance == 0;
}

int main() {
    const char* expression1 = "(())()";  // exemplo valido
    const char* expression2 = "(()";     // exemplo invalido

    // verificando se as expressões estão balanceadas
    if (isBalanced(expression1)) {
        cout << "Expressão 1: Válido" << endl;
    } else {
        cout << "Expressão 1: Inválido" << endl;
    }

    if (isBalanced(expression2)) {
        cout << "Expressão 2: Válido" << endl;
    } else {
        cout << "Expressão 2: Inválido" << endl;
    }

    return 0;
}
