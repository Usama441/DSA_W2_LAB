// Car.h
#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"

class Car {
private:
    std::string make;
    std::string model;
    Engine engine;  // Composition - Car "has a" Engine

public:
    Car(const std::string &make, const std::string &model, const Engine &engine); // Parameterized constructor
    Car(const Car &other);                                                        // Copy constructor
    void display() const;                                                         // Display function
};

#endif