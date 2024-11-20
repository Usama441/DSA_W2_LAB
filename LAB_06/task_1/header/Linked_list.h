#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <string>

using namespace std;

class LinkedList {
public:
    Node* head;

    LinkedList();                  
    void append(int value);        
    string updateNodeData(int position, int newValue);
    void display();               
    bool search(int value);       
    string deleteByPosition(int position); 
    int countNodes();              
    string deleteByValue(int value); 
    Node* findMiddle();           
};

#endif 
