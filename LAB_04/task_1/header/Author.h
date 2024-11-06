
#include <string> 
#include "Book.h"

using namespace std;

class Author{

    private:

    string name;

    Book book[10];

    public:

    Author(string name);
    
    void add_books(Book& coming_book);
    void display_books();
    
};