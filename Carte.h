#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Pokimac.h"
#include "Tile.h"
#include "consoleUtils.hpp"
#include "Displayer.h"
using namespace std;

class Carte {     
       
  public:           
    
    vector<Pokimac> pokimac;
    int height = 30;
    int width = 40;
    Tile tiles[30][40];
    Displayer display;

    Carte();
    Tile getCase(int x, int y);
    void generateTiles();
    void displayCarte();
    void setPlayerPos(int x, int y);
    void generatePokimacs();

};