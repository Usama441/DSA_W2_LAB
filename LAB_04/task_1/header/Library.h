#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
#include"Author.h"

using namespace std;

class Library {
    
    public:
   
    vector<Book> books;

    void add_book(Book& book);
    void display_all_books();
    void display_books_by_author(Author& author);
};

#endif