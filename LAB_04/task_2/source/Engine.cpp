
#include "Engine.h"

#include <iostream>
#include <string>
using namespace std;

Engine::Engine(string type, int hp) {

    this-> engine_type = type;
    this-> horse_power = hp;
}

Engine::Engine(Engine &other) : type(other.type), horsepower(other.horsepower) {}

void Engine::display() {

    cout << "Engine Type: " << type << ", Horsepower: " << horsepower << endl;
}