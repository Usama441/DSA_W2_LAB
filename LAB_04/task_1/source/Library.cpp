#include "Library.h"
#include <iostream>
using namespace std;

void Library::add_book(Book& book) {
    
    books.push_back(book);  
}

void Library::display_all_books() {
    

    if (books.empty()) {
        cout << "No books available." << endl;
    } else {
        for (int i = 0; i < books.size(); i++) {
            cout << "Book title: " << books[i].title
                 << ", ISBN: " << books[i].Isbn
                 << ", Published: " << books[i].Publication_year << endl;
        }
    }
}

void Library::display_books_by_author(Author& author) {
   
    author.display_books();
}
