     
 #include <iostream>
 #include "Node.h"   

 using namespace std;   
    
    Stack :: Stack(){

        top=nullptr;
        
    }

    // Push operation to add an element to the stack
    void Stack :: push(int value) {
        Node* newNode = new Node(value);
        if (!top) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
    }

    // Pop operation to remove the top element from the stack
    int Stack :: pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop." << endl;
            return -1;
        }
        int poppedValue = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    // Peek operation to view the top element of the stack
    int Stack :: peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    // Check if the stack is empty
    bool Stack :: isEmpty() {
        return top == nullptr;
    }


