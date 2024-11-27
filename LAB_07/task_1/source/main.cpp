#include "Node.h"
#include <iostream>
using namespace std;

int main() {
    Node* head = nullptr;

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    cout << "List in forward order: ";
    printList(head);

    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    cout << "List after inserting at the end: ";
    printList(head);

    cout << "List in reverse order: ";
    printListRevers(head);

    return 0;
}
