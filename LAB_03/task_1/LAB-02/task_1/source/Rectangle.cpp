
#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle :: Rectangle(double width, double height)
{
    this-> height = height;
    this-> width  = width; 
}

void Rectangle :: area() {
    
    cout<<"Rectangle Area is : " << width * height << endl;
}

void Rectangle:: perimeter() {

    cout <<"Rectangle perameters : " << 2 * (width + height)<<endl;
}