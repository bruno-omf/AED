#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "node.h"

Node* insertNode(Node* root, int data);
Node* removeNode(Node* root, int data);
Node* minimumFinder(Node* node);
void searchNode(Node* root, int data);
void preOrder(Node* root);
void inOrder(Node* root);
void postOrder(Node* root);

#endif