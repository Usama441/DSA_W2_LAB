
#include "Car.h"

#include <iostream>
#include <string>

using namespace std;

Car :: Car(string m,string md,Engine &engine): engine(engine){

        make = m;
        model = md;
        
}

Car :: Car(Car &other): make(other.make), model(other.model), engine(other.engine) {
        
        this-> make = other.make;
        this-> model = other.model;
        this->engine = other.engine;
}

void Car :: display(){
    
    cout << "Car Make: " << make << ", Model: " << model << endl;
    engine.display();
}
