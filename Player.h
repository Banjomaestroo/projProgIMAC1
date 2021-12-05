#include <iostream>
#include <string>
#include "Pokimac.h"
#include "InventoryObject.h"
using namespace std;

class Player {     
       
  public:           
    
    string name;
    Pokimac pokemonTeam[10];
    int xCoordinate;
    int yCoordinate;
    InventoryObject Inventory[10];

    void addPokimac(Pokimac toAdd);
    void capturePokimac(Pokimac toCapture);
    void moveRight();
    void moveLeft();
    void moveUp();
    void moveDown();
    void askToCome(Pokimac toCome);
    void battle(Pokimac toBattle);
    void addObject(InventoryObject toAdd);
    void addPokimac(Pokimac toAdd);

};