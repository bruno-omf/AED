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

Node* minimumFinder(Node* node) { // encontra o menor valor em uma sub-árvore
    while (node->left != NULL) {
        node = node->left;
    }
    return node;
}

Node* removeNode(Node* root, int data) {
    if (root == NULL) { // CASO BASE
        return root;
    }

    if (data < root->data) { // se o valor for menor que a raiz, busca na sub-arvore esquerda
        root->left = removeNode(root->left, data);
    } else if (data > root->data) { // se o valor for maior que a raiz, busca na sub-árvore direita
        root->right = removeNode(root->right, data);
    } else {
        if (root->left == NULL && root->right == NULL) { // CASO 1: remover um nó sem filhos
            free(root); // libera o nó atual
            return NULL;
        } else if (root->left == NULL) { // CASO 2: remover um nó com um filho. Se o nó da esquerda da raiz for nulo:
            Node* temp = root->right; // armazena o nó da direita
            free(root); // libera o nó atual
            return temp; // retorna o nó da direita
        } else if (root->right == NULL) { // CASO 2: remover um nó com um filho. Se o nó da direita da raiz for nulo:
            Node * temp = root->left; // armazena o nó da esquerda
            free(root); // libera o nó atual
            return temp; // retorna o nó da direita
        }

        // CASO 3: remover um nó com dos filhos
        // encontra o sucessor
        Node* temp = minimumFinder(root->right);
        root->data = temp->data; // substitui o valor da raiz pelo menor valor da sub-árvore da direita (sucessor imediato)
        root->right = removeNode(root->right, temp->data); // remove o sucessor imediato da raiz (menor valor da sub-árvore da direita)
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

    cout << "Removing node 20: ";
    removeNode(root, 20);
    inOrder(root);
    cout << endl;

    cout << "Removing node 30: ";
    removeNode(root, 30);
    inOrder(root);
    cout << endl;

    cout << "Removing node 50: ";
    removeNode(root, 50);
    inOrder(root);
    cout << endl;

    cout << "In-order tree post removes: ";
    inOrder(root);
    cout << endl;

    return 0;
}