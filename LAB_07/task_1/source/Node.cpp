
#include "Node.h"
#include <iostream>
using namespace std;


Node::Node(int value) {
    data = value;
    next = nullptr;
    previous = nullptr;
}


void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node(value); 
    newNode->next = head;           
    if (head != nullptr) {          
        head->previous = newNode;
    }
    head = newNode;                 
}


void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value); 
    if (head == nullptr) {           
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {  
        temp = temp->next;
    }
    temp->next = newNode;            
    newNode->previous = temp; 
}


void printList(Node*& head) {
    if (head == nullptr) {          
        cout << "The list is empty." << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) { 
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void printListRevers(Node*& head) {
    if (head == nullptr) {         
        cout << "The list is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) { 
        temp = temp->next;
    }

    while (temp != nullptr) {       
        cout << temp->data << " ";
        temp = temp->previous;
    }
    cout << endl;
}

void nodesCounter(Node* &head){
    
    Node* temp = head;
    int counter = 0 ;

    while (temp != NULL)
    {
       counter++;
        temp = temp->next;
    }
    cout <<"Nodes in list : "<<counter<<endl;
}

void deleteNode(Node* &head,int position){
    
    Node* temp;
    temp = head;

    int lenght =1;

    while(temp !=nullptr){

        if (lenght == position){

        }
    }


}