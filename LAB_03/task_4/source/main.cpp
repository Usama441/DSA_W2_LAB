#include <iostream>

using namespace std;

void array_multiplication(int size , int arr[]){
   
   int value_at_index = 0;

   cout << "After multiplication : ";
   
   for(int i = 0 ; i<size ; i++ ){
     
     value_at_index = arr[i];
     value_at_index = value_at_index *2;
     
     arr[i] = value_at_index;

     value_at_index = 0;

   }
  
  for(int i = 0 ; i<size ; i++ ){
     
    cout << arr[i] << ",";
  }

   cout << endl;

}
int main(){
  
  int size = 10;

  int arr[size];

  for(int i = 0 ; i<size ; i++ ){
     
     arr[i] = i;
  }
  
  cout << "Before Multiplying : ";
  
  for(int i = 0 ; i<size ; i++ ){
     
    cout << arr[i] << ",";
  }
  cout <<endl;

  array_multiplication(size, arr);
  
  
}