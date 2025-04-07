// 8. Cálculo de Área e Perímetro
// Crie uma struct chamada Retangulo, que contém:
// • Base (float)
// • Altura (float)
// Crie funções para calcular a área e o perímetro do retângulo. No main(), permita
// que o usuário insira os valores e exiba os cálculos.
#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Retangulo {
    float base;
    float altura;
} Retangulo;

float calculaArea(float base, float altura) {
    float area;
    area = base * altura;
    
    return area;
}

float calculaPerimetro(float base, float altura) {
    float perimetro;
    perimetro = 2 * (base + altura);

    return perimetro;
}

int main() {
    Retangulo* retangulo1 = (Retangulo*)malloc(sizeof(Retangulo));
    float area;
    float perimetro;

    cout << "-- Calculo de Area e Perimetro de um Retangulo --" << endl;
    cout << "Informe a base: ";
    cin >> retangulo1->base;
    cout << "Informe a altura: ";
    cin >> retangulo1->altura;

    area = calculaArea(retangulo1->base, retangulo1->altura);
    perimetro = calculaPerimetro(retangulo1->base, retangulo1->altura);

    cout << endl << "A area deste triangulo eh: " << area << "." << endl;
    cout << "E o perimetro dele eh: " << perimetro << "." << endl;

    return 0;
}