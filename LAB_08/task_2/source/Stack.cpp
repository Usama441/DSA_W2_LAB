
#include<iostream>
#include "Stack.h"

using namespace std;

Stack :: Stack (){

    top = -1;
}


void Stack :: push(int value){

    if (top == -1){
        top++;
        data[top] = value ;
    }

} 