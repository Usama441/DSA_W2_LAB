#include <iostream>
#include "Node.h"
#include "Stack.h"

using namespace std;



int main() {
    
    Stack stack;

    // Push elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Peek the top element
    cout << "Top element: " << stack.peek() << endl;

    // Pop elements from the stack
    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;

    // Check if the stack is empty
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    // Pop the last element
    cout << "Popped: " << stack.pop() << endl;

    // Try to pop from an empty stack
    stack.pop();

    return 0;
}