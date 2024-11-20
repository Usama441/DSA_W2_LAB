#include "Linked_list.h"
#include <iostream>

using namespace std;

int main() {
    LinkedList list;


    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);
    list.append(50);

    cout << "Original List: ";
    list.display();

    // Task 2: Search for a value
    int searchValue = 30;
    if (list.search(searchValue)) {
        cout << "Found " << searchValue << " in the list." << endl;
    } else {
        cout << searchValue << " not found in the list." << endl;
    }

    // Task 3: Delete by position
    cout << list.deleteByPosition(2) << endl;
    cout << "Updated List: ";
    list.display();

    // Task 4: Count nodes
    cout << "Total nodes in the list: " << list.countNodes() << endl;

    // Task 5: Delete by value
    cout << list.deleteByValue(20) << endl;
    cout << "Updated List: ";
    list.display();

    // Task 6: Find middle node
    Node* middle = list.findMiddle();
    if (middle) {
        cout << "Middle node: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}
