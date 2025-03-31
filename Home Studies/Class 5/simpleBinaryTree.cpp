#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL;) {
        cout << "Memory allocation error!" << endl;
        exit(1); // termina o programa completamente
    } else {
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
}

Node* insertNode(Node* root, int data) {
    Node* newNode = createNode(data);
    if (root == NULL) {
        return newNode;
    }
}

void preOder(Node* root) {
    if (root != NULL) {
        cout << root->data;
        preOder(root->left);
        preOder(root->right);
    }
}

void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->data;
        inOrder(root->right);
    }
}

void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data;
    }
}

int main() {

    return 0;
}