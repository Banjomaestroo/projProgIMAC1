#pragma once
#include <iostream>
#include <string>
#include "Pokimac.h"
#include "Tile.h"
#include "consoleUtils.hpp"
using namespace std;

class Carte {     
       
  public:           
    
    Pokimac pokimac[10];
    int height = 50;
    int width = 30;
    Tile tiles[50][30];

    Tile getCase(int x, int y);
    void generateTiles();
    void displayCarte();
    void setPlayerPos(int x, int y);
    void generatePokimacs();

};