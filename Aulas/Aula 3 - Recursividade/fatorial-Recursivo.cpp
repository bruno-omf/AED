#include <iostream>

using namespace std;

int fatorial(int n) {
    if (n == 0) return 1;

    return n * fatorial(n - 1);
}

int main () {

    int num = 5;
    cout << "Fatorial do numero " << num << " eh: " << fatorial(num) << endl;

    return 0;
}