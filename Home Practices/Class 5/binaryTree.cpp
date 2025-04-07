#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct Node {
    int value;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node* insertLeft(Node* root, int value) {
    Node* newNode = createNode(value);
    root->left = newNode;

    return newNode;
}

Node* insertRight(Node* root, int value) {
    Node* newNode = createNode(value);
    root->right = newNode;

    return newNode;
}

void printTree(Node* root) {
    cout << "root: " << root->value << endl;
    cout << "node left: " << root->left->value << endl;
    cout << "node right: " << root->right->value << endl;
}

int main() {
    Node* root = createNode(10);

    insertLeft(root, 20);
    insertRight(root, 30);

    printTree(root);

    return 0;
}