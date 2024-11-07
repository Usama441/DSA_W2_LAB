#ifndef CAR_H
#define CAR_H


#include <string>
#include "Engine.h"

using namespace std;

class Car {
private:
    string make;
    string model;
    Engine engine;  

public:
    Car(string m,string md,Engine &engine); 
    Car(Car &other);                                                        
    void display();                                                         
};

#endif