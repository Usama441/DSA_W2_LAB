#include <iostream>
#include "Rectangle.h"


using namespace std;

void clear_screen() {
#ifdef _WIN32
    system("cls"); 
#else
    system("clear");
#endif
}

int main (){
   
   clear_screen();

    Rectangle rec_obj(9,3);  
    
    rec_obj.area();
    rec_obj.perimeter();

    return 0;
}