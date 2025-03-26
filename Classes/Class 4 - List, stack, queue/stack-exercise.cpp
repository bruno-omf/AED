#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Node {
    char data;
    struct Node* next;
} Node;

void reverseWord(char word[]) {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = word[0];
    head->next = NULL;

    for (int i = 1; word[i] != '\0'; i++) { // monto a pilha na ordem inversa
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = word[i];
        newNode->next = head;
        head = newNode;
    }

    cout << "Palavra invertida: ";
    while (head != NULL) {
        cout << head->data;
        //Node* temp = head;
        head = head->next;
        //free(temp);
    }
    cout << "\n";
}

int main() {
    char word[100];

    cout << "Digite uma palavra: ";
    cin >> word;

    reverseWord(word);

    return 0;
}