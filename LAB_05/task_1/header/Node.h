#ifndef NODE_H
#define NODE_H

class Node{
    
    public:
    
    int data;
    Node* next;

    Node(int value);

};
void insertAtHead(Node* &head,int value);
void insertAtEnd(Node* &head,int value);
void printList(Node* &head);
#endif