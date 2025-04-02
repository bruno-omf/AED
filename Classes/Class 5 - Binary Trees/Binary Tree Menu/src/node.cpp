#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "../include/node.h"

using namespace std;

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