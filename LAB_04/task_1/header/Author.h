
#ifndef AUTHOR_H
#define AUTHOR_H

#include <string> 
#include "Book.h"
#include <vector>

using namespace std;

class Author{

    public:

    string name;

    vector<Book> books;

    Author(string n);
    
    void add_books(Book& coming_book);
    void display_books();
    
};

#endif