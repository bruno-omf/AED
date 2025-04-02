#include <iostream>
#include "../include/menu.h"
#include "../include/operations.h"
#include "../include/utils.h"

using namespace std;

void showMenu(Node** root) {
    int option, data;

    do {
        timer(3);
        clearScreen();
        cout << endl << "----- Binary Tree Interative Menu -----" << endl;
        cout << "1. Insert Value" << endl;
        cout << "2. Remove Value" << endl;
        cout << "3. Search Value" << endl;
        cout << "4. Print Tree In Order" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose an option -> ";
        cin >> option;

        switch (option) {
            case 1:
                cout << endl << "Enter value to insert in the Tree: ";
                cin >> data;
                *root = insertNode(*root, data);
                cout  << ">> " << data << " << was inserted in the tree!";
                break;
            case 2:
                cout << endl << "In Order Tree values: {";
                inOrder(*root);
                cout << "}";
                cout << endl << "Enter value to remove in the Tree: ";
                cin >> data;
                *root = removeNode(*root, data);
                break;
            case 3:
                cout << endl << "In Order Tree values: {";
                inOrder(*root);
                cout << "}";
                cout << endl << "Enter value to search in the Tree: ";
                cin >> data;
                searchNode(*root, data);
                break;
            case 4:
                cout << endl << "In Order Tree: {";
                inOrder(*root);
                cout << "}";
                cout << endl;
                break;
            case 0:
                cout << "Exiting program...";
                break;
            default:
                cout << "Invalid option! Try again." << endl;
        }

    } while (option != 0);
}