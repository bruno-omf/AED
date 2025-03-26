#include <iostream>

using namespace std;

int potIterativa(int x, int y) {
    int resultado = 1;

    for (int i = 0; i < y; i++) {
        resultado = resultado * x; // 1 * 2 = 2; 2 * 2 = 4; 4 * 2 = 8; 8 * 2 = 16;
    }
    return resultado;
}

int main() {
    int base = 2, expoente = 4;
    cout << "O numero " << base << " elevado ao expoente " << expoente << " eh: " << potIterativa(base, expoente) << endl;

    return 0;
}