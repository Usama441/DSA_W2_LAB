#ifndef NODE_H
#define NODE_H

class Node {
 
  public :
    
    int data;
    Node* next;
    Node* previous;

    Node(int value);
};

void insertAtHead(Node* &head,int value);
void insertAtEnd(Node* &head,int value);
void printList(Node* &head);
void printListRevers(Node* &head);//task#01
void nodesCounter(Node* &head);//task#02
void deleteNode(Node* &head,int position);//task#03

#endif 
