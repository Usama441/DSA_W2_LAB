#include "Node.h"
#include <iostream>
using namespace std;

int main() {
    Node* firstList = nullptr;
    Node* secondList = nullptr;
    Node* thirdList = nullptr;

    insertAtHead(firstList, 10);
    insertAtHead(firstList, 20);
    insertAtHead(firstList, 30);

    cout << "List in forward order: ";
    printList(firstList);

    insertAtEnd(firstList, 40);
    insertAtEnd(firstList, 50);

    cout << "List after inserting at the end: ";
    printList(firstList);
    
    cout << "Task # 01"<<endl;
    cout << "List in reverse order: ";
    printListRevers(firstList);
    
    cout << "Task # 02"<<endl;
    nodesCounter(firstList);
    
    cout << "Task # 04"<<endl;
    insertAtHead(secondList, 70);
    insertAtHead(secondList, 90);
    insertAtHead(secondList, 80);
    insertAtEnd(secondList, 100);
    insertAtEnd(secondList, 60);
    cout << "First list  : ";
    printList(firstList);
    cout << "Second list : ";
    printList(secondList);

    mergingList(firstList,secondList,thirdList);
    cout << "After storing <2> Lists in <1> list : ";
    printList(thirdList);

    return 0;
}
