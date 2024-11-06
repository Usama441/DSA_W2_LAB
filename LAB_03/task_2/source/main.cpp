#include <iostream>

using namespace std;

int main(){
  
  int arr[5] = {5, 10, 15, 20, 25};
  
  for(int i = 0 ; i< 5 ; i++)
  {
    if (i == 2)
    {
        cout <<"Value at 3rd Index is : "<< arr[i] << endl;
        break; 
    }
  }
}