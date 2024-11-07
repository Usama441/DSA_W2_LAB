#include <iostream>

using namespace std;

int main(){
   
    
    int size = 0;
    int value = 0;
    int sum  = 0;
    double avrage = 0;

    cout << "Enter the size of array : ";
    cin >> size;

    int* arr = new int[size];

    cout << "\nEnter the "<< size <<" vallues manually : " << endl << endl ;

    for(int i = 0 ; i < size ; i++){
       
       cout << "Enter value at arr [" << i<< "] : ";
       cin >> value ;
       arr[i] = value ;
       value = 0 ;

    }

    for(int i = 0 ; i < size ; i++){
        
        sum = sum + arr[i]; 
    }


    avrage = sum / size;
    cout << "\nAverage of " << sum << "/" << size << " is : " << avrage;
    
     delete[] arr;
}
