#include <iostream>
# include <stdio.h>

#define SIZE 12

using namespace std;

int binarySearch(int vector[], int key) {
    int start = 0, end = SIZE - 1, middle;

    while (start <= end) {
        middle = (start + end) / 2; // divisoes sucessivas do array pra poder encontrar o meio dele, ou seja, o valor do meio do array

        if (vector[middle] == key) {
            return middle; // valor encontrado
        } else if (vector[middle] < key) { // se o valor atual da variavel meio for menor que o valor a ser buscado:
            start = middle + 1; // tenho que buscar na parte direita do array, ou seja, o meio atual e os valores a esquerda dele sao descartados
        } else { // se o valor atual da variavel meio for maior que o valor a ser buscado:
            end = middle - 1; // tenho que buscar na parte esquerda do array, ou seja, o meio atual e os valores a direita dele sao descartados
        }
    }
    return -1; // nao encontrado
}   

int main() {
    int vec[] = {8, 10, 12, 15, 20, 30, 33, 34, 50, 55, 82, 95};
    int key = 0;
    int index;

    cout << "Vector {";
    for (int i = 0; i < SIZE; i++) {
        cout << vec[i] << ",";
    }
    cout << "}" << endl;

    cout << "Which numer do you want to search for?" << ": " << endl;
    cin >> key;

    index = binarySearch(vec, key);

    if (index == -1) {
        cout << "The number " << key << " was not found in the vector." << endl;
    } else {
        cout << "The number " << key << " was found in the vector at the position [" << index << "]" << endl;
    }
    
    return 0;
}