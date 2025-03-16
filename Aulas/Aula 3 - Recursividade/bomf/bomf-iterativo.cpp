#include <iostream>

using namespace std;

int calculaMDC(int num1, int num2) {
    while(num2 != 0) {
        int resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }
    return num1;
}

int main() {
    int num1 = 40, num2 = 60;

    cout << "O MDC entre " << num1 << " e " << num2 << " é o número " << calculaMDC(num1, num2) << endl;

    return 0;
}