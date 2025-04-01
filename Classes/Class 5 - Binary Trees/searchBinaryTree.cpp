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
    if (newNode == NULL) {
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
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}

void preOder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOder(root->left);
        preOder(root->right);
    }
}

void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node * root = NULL; // criar um no raiz inicializando com null
    
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 70);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 60);
    insertNode(root, 80);

    /* cout << "Pre-order tree: ";
    preOder(root);
    cout << endl; */

    cout << "In-order tree: ";
    inOrder(root);
    cout << endl;

    /* cout << "Post-order tree: ";
    postOrder(root);
    cout << endl; */

    return 0;
}