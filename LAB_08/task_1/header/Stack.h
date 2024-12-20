#ifndef STACK_H
#define STACK_H



#include <iostream>
#include "Node.h"

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