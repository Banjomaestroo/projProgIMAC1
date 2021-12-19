#pragma once
#include <iostream>
#include <string>
#include "Pokimac.h"
#include "Tile.h"
#include "consoleUtils.hpp"
using namespace std;

class Carte {     
       
  public:           
    
    Pokimac pokimac;
    static const int height = 50;
    static const int width = 35;
    static Tile tiles[height][width];

    Tile getCase(int x, int y);
    void generateTiles();
    void displayCarte();
    void setPlayerPos(int x, int y);

};