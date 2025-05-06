#include <iostream>
# include <stdio.h>

#define SIZE 6

using namespace std;

int sequentialSearch(int vector[], int key) { // ou retorna um indice se for encontrado, ou retorna -1 se nao for encontrrado.
    if (vector[0] == key) {
        return 0; // encontrado logo na 1° posicao, ja economiza um pouco de processamento
    } else {
        for (int i = 1; i < SIZE; i++) {
            if (vector[i] == key) {
                return i; // encontrado
            }
        }
        return -1;
    }
}

int main() {
    int vec[] = {30, 15, 20, 55, 8, 10};
    int key = 0;
    int index;

    cout << "Vector {";
    for (int i = 0; i < SIZE; i++) {
        cout << vec[i] << ",";
    }
    cout << "}" << endl;

    cout << "Which numer do you want to search for?" << ": " << endl;
    cin >> key;

    index = sequentialSearch(vec, key);

    if (index == -1) {
        cout << "The number " << key << " was not found in the vector." << endl;
    } else {
        cout << "The number " << key << " was found in the vector at the position [" << index << "]" << endl;
    }

    return 0;
}