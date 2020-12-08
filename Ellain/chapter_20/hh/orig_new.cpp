#include <iostream>
#include "linkedlist.h"

using namespace std;

int main()
{
    Node *p_lsit = NULL;
    for (int i = 0; i < 10; ++i)
    {
        int value;
        cout << "Enter value for list node: ";
        cin >> value;
        p_lsit = addNode(p_lsit, value);
    }
    printList(p_lsit);
}