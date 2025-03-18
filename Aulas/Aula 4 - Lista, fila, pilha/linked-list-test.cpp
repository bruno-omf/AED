#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
}typedef Node;

void printList(Node* n) {
    while (n != nullptr) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main () {
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    Node* head = first;
    
    first->data = 3;
    first->next = second;

    second->data = 5;
    second->next = third;

    third->data = 10;
    third->next = nullptr;
    
    printList(head);

    delete first; // o "delete" libera memória alocada com o new
    delete second;
    delete third;

    return 0;
}