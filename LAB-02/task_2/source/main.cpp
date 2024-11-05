#include <iostream>
#include <cstdlib>
#include "Calculator.h"

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

   Calculator cal(12,13);
   Calculator cal2(25,23);

   cal.addition();
   cal.subtraction();
   cal.multiplication();
   cal.division();
   cal2.addition();
    return 0;
}