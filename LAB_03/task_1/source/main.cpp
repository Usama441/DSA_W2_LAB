#include <iostream>

using namespace std;


int main(){
   
   int size = 10;

   int arr[size];

   for(int i = 0 ; i<size ; i++ ){
     
     arr[i] = i;
   }
  
    for(int i = 0 ; i<size ; i++ ){
     
     cout << arr[i] << ",";
   }
}

/*Array Declaration: Write the C++ code to declare 
an array of 10 integers and initialize it with values from 1 to 10.*/