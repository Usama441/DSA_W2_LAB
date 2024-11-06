#include <iostream>

using namespace std;

int main(){
  
  int arr[5] = {5, 10, 15, 20, 25};
  
  
  int* ptr;
  ptr = arr;

  cout << "*Ptr : " << *ptr << endl;
  cout << "&ptr : " << &ptr << endl; 
  cout << "ptr  : " << ptr << endl;
}