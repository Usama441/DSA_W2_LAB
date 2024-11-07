
#include "Car.h"

#include <iostream>

Car::Car(const std::string &make, const std::string &model, const Engine &engine)
    : make(make), model(model), engine(engine) {}

Car::Car(const Car &other) : make(other.make), model(other.model), engine(other.engine) {}

void Car::display() const {
    std::cout << "Car Make: " << make << ", Model: " << model << std::endl;
    engine.display();
}
