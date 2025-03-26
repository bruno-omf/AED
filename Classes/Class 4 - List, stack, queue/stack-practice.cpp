#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Node {
    char data;
    struct Node* next;
} Node;

void reverseWord(char word[]) {
    // criar o head
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = word[0];
    head->next = NULL;
    //inserir as outras letras no início da pilha, na ordem inversa
    for (int i = 1; word[i] != '\0'; i++) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = word[i];
        newNode->next = head;
        head = newNode;
    }
    //imprimir a pilha
    cout << "A palavra invertida eh: ";
    while (head != NULL) {
        Node* temp = head;
        cout << head->data;
        head = head->next;
        free(temp);
    }
    cout << endl;
}

int main() {
    char word[20];

    cout << "Informe uma palavra: ";
    cin >> word;
    reverseWord(word);

    return 0;
}