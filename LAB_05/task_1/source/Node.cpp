#include "Node.h"
#include <iostream>

using namespace std;

Node :: Node(int value){

    data = value;
    next = nullptr;
}

void insertAtHead(Node* &head,int value){
 
    Node* newnode = new Node(value);
    cout << "Enterd value at head"<<value<<endl;
   
    if (head == nullptr){
       
       head = newnode;
    }
    else {
      
      newnode->next = head;
      head = newnode;
    }
}

void insertAtEnd(Node* &head,int value){

    Node* newnode = new Node(value);
    cout <<"Enterd value at tail : " << value<<endl;
    cout <<"Currentally head points at : "<< head->data<<endl; 
    Node* temp = head;
   
    if (head == nullptr)
    {
        head = newnode;
    }
   
    while (temp->next != nullptr){

        temp = temp->next;
    }

    temp->next = newnode;
    newnode->next = nullptr;

    cout << "New node added at the end with value: " << newnode->data << endl;


}

void printList(Node* &head){

    Node* temp;
    temp = head;

    while (temp != nullptr){
        cout << temp->data<<"<-";
        temp = temp->next;
    }

    cout <<endl;
}