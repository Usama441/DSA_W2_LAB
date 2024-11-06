#include <iostream>
#include "Book.h"

using namespace std;


Book :: Book(string b_t,string i,int year){
        
    this->title = b_t;
    this->Isbn = i;
    this->Publication_year = year;
}