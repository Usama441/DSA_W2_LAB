#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);

    s.pop();
}