#include <iostream>
#include <string>
#include "Pokimac.h"
#include "Tile.h"
using namespace std;

class Carte {     
       
  public:           
    
    Pokimac pokimac;
    Tile tiles[50];

    Tile getCase(int x, int y);
    void generateTiles();
    void displayCarte();

};