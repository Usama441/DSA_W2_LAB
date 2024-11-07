#include "Car.h"
#include "Engine.h"
#include <iostream>

using namespace std;

int main(){
    
    Engine engine("V8",1000);
    
    Car car1("Honda","1986",engine);  
    
    Car car2 = car1;
    
    car1.display();
    
    car2.display();
}   
