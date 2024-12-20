#ifndef STACK_H
#define STACK_H




class Stack{

  
public:

    int data[5];
    int top;


    Stack();
    void push(int value);
    void pop();
    void peek();
    void isEmpaty();

};



#endif