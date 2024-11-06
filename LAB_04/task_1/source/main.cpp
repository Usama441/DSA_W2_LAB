#include <iostream>
#include "Author.h"
#include "Book.h"
#include "Library.h"

using namespace std;

void clear_screen() {

#ifdef _WIN32
    system("cls"); 
#else
    system("clear");
#endif

void display();
}

int main() {
    
    clear_screen();

    display();

    return 0;
}

void display(){
        Book book1("The Great Gatsby", "9780743273565", 1925);
    Book book2("To Kill a Mockingbird", "9780061120084", 1960);
    Book book3("1984", "9780451524935", 1949);

    
    Author author1("F. Scott Fitzgerald");
    Author author2("Harper Lee");

    author1.add_books(book1);
    author2.add_books(book2);


    Library library;
    library.add_book(book1);
    library.add_book(book2);
    library.add_book(book3);

    cout << "\nDisplay Books by Author : " << endl << endl;
    library.display_books_by_author(author1);
    library.display_books_by_author(author2);
    
    cout << "\nAll Books in Library : " << endl << endl;
    library.display_all_books();
}