
#include "Engine.h"

#include <iostream>
#include <string>
using namespace std;

Engine::Engine(string type, int hp) {

    this-> engine_type = type;
    this-> horse_power = hp;
}

Engine::Engine(Engine &other){
    
    engine_type = other.engine_type;
    horse_power = other.horse_power;
}

void Engine::display() {

    cout << "Engine Type: " << engine_type << ", Horsepower: " << horse_power << endl;
}