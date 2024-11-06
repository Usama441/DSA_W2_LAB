#ifndef BOOK_H
#define BOOK_H

#include <string> 

using namespace std;

class Book {
  
  public:

  string title;
  string Isbn;
  int Publication_year;
  

  
  Book(string b_t,string i,int year);

};

#endif