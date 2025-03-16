#include <iostream>

using namespace std;

int fibIterativo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c = 0;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int num = 6;
    cout << "Fibonnaci do numero " << num << " eh: " << fibIterativo(num) << endl;
}