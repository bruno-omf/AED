#include <iostream>

using namespace std;

int fatIterativo(int n) {
    int resultado = 1;

    for (int i = 1; i < n; i++) {
        resultado = resultado * i; // 1 * 1; 1 * 2; 2 * 3; 6 * 4; 24 * 5 = 120;
    }
    return resultado;
}

int main() {
    int num = 5;
    cout << "O fatorial do numero " << num << " eh: " << fatIterativo(num) << endl;

    return 0;
}