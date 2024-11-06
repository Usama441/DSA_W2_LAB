#include "Book.h"
#include "Author.h"

class Library{

    public:

    Book books[10]; 

    void addBook(Book& book);
    void displayBooksByAuthor(Author& author);

};