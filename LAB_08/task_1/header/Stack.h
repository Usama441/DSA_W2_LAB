#ifndef STACK_H
#define STACK_H


#include "Node.h"
#include <iostream>


using namespace std;

class Stack {

private:
    
    Node* top; 
    

public:

    Stack() ;
    void push(int value);
    int pop();
    int peek();
   bool isEmpty();
};
#endif