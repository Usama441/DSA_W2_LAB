
#include<iostream>
#include "Stack.h"

using namespace std;

Stack :: Stack (){

    top = -1;
}


void Stack :: push(int value){
   
   bool status = false;
   if (top >5){
      
      cout << "Stack is underflow condition" <<endl;
      return;
   }

   else if (top == -1){
        top++;
        data[top] = value ;
        status = true;
    }
    else {
    top++;
    data[top] = value;
    status = true ;
    }

    if (status == true ){
    cout << "Value '" << data[top] << "' Pushed in stack"<<endl;
    }
} 

void Stack :: pop(){
    
    int poped_value;

    if (top<0){

        cout << "Stack is Empaty "<<endl;
    }
    else 
     
     poped_value = data[top];
     top--;

     cout << "poped value is '"<<poped_value<<"' "<<endl;

}   