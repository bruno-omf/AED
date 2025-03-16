#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int n = 0;
    cout << "Informe um numero inteiro: ";
    cin >> n;
    cout << "Fibonacci do numero " << n << " eh: " << fibonacci(n) << endl;
    
    return 0;
}