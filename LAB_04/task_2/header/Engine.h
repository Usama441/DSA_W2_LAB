#ifndef ENGINE_H
#define ENGINE_H

#include <string>

using namespace std;

class Engine {
   
   private:

   string engine_type;
   int horse_power;
   
   public:

   Engine(string type,int hp);
   Engine( Engine &other);
   void display();
};

#endif