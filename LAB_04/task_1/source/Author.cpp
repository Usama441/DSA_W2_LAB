#include <iostream>
#include "Author.h"
#include "Book.h"

using namespace std;

int books_count = 0;

Author :: Author(string n){

    this-> name = n; 
}

void Author :: add_books(Book& coming_book){
    
    if (books.size() == 10) {
        cout << "Sorry, you cannot add more than 10 books." << endl;
    } else {
        books.push_back(coming_book); 
    }

}

void Author :: display_books() {

    cout << "Author : " << name << endl;
    if (books.empty()) {
        cout << "Sorry, there are no books by this author." << endl;
    } else {
        for (int i = 0; i < books.size(); i++) {
            cout << "Book title: " << books[i].title
                 << ", ISBN: " << books[i].Isbn
                 << ", Published: " << books[i].Publication_year << endl;
        }
 
    }
}

/*Design a book, Author, and Library  class to manage a personal
library.books.
  Create a book class with attributes like title ,Isbn , and Publication year.
  Create an Author class with attributes like Name and a method to display their books.
  The Library class should contain a list of Book objects and methods to add books and 
display all books by specific author.*/