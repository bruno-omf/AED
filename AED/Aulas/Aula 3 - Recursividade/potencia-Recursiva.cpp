#include <iostream>

using namespace std;

int potencia(int x, int y) {
    if (y == 0) return 1;

    return x * potencia(x, y - 1);
}

int main() {
    int base = 2, expoente = 4;
    cout << "O numero " << base << " elevado ao expoente " << expoente << " eh: " << potencia(base, expoente) << endl;

    return 0;
}