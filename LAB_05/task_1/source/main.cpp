#include <iostream>
#include "Node.h"

using namespace std;

int main(){

    Node* head  = nullptr;

    insertAtHead(head,10); 
    insertAtHead(head,11); 
    insertAtHead(head,12); 
    insertAtHead(head,13);
    printList(head);
    insertAtEnd(head,9);
    insertAtEnd(head,8);
    insertAtEnd(head,7);
    
    printList(head);
}