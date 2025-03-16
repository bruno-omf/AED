#include <iostream>

using namespace std;

int calculaMDC(int num1, int num2) { // 1° - (40, 60); 2° - (60, 40); 3° - (40, 20); 4° - (20, 0)
    if (num2 == 0) return num1;// 1° - pula; 2° - pula; 3° - pula; 4° - num2 == 0, entao return num1, que é igual a 20. MDC = 20.

    return calculaMDC(num2, num1 % num2); //1° - (60, 40 %  60 == 40); 2° - (40, 60 % 40 == 20); 3° - (20, 40 % 20 == 0);
}

int main() {
    int num1 = 40, num2 = 60;

    cout << "O MDC entre " << num1 << " e " << num2 << " é o número " << calculaMDC(num1, num2) << endl;

    return 0;
}