#include <iostream>
#include "../include/menu.h"
#include "../include/operations.h"

using namespace std;

void showMenu(Node** root) {
    int option, data;

    do {
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
                cin >> data;
                *root = insertNode(*root, data);
                break;
            case 2:
                cin >> data;
                *root = removeNode(*root, data);
                break;
            case 3:
                cin >> data;
                searchNode(*root, data);
                break;
            case 4:
                cin >> data;
                cout << "In Order Tree: ";
                inOrder(*root);
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