#pragma once
#include <iostream>
#include <string>
#include "Pokimac.h"
using namespace std;

class Tile {     
       
  public:           
    
    string species;
    string img;
    int xCoordinate;
    int yCoordinate;
    Pokimac pokimac;

    Tile(int rand);
    void addPokimac(Pokimac toAdd);

};