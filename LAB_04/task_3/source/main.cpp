#include <iostream>
#include <string>

using namespace std;

int main(){

    
    int number_of_string = 0;
    string user_input;

    cout << "Enter the size of array : ";
    cin >> number_of_string;

    string* str_arr = new string[number_of_string];

    cout << "\nEnter the "<< number_of_string <<" strings  : " << endl << endl ;
    
    cin.ignore();
    
    for(int i = 0 ; i < number_of_string ; i++){
       
       cout << "Enter value at arr [" << i<< "] : ";
       
       getline(cin, str_arr[i]);

    }

    for(int i = 0 ; i < number_of_string; i++){
        
        cout << "String at arr [" << i<< "] : ";

        cout<< str_arr[i] << endl;
    }

     delete[] str_arr;
}
