#include <iostream>
#include <string>
#include "Pokimac.h"
#include "InventoryObject.h"
using namespace std;

class Player {     
       
  public:           
    
    string name;
    Pokimac pokemonTeam[10];
    int pokeTeamPos = 0;
    int xCoordinate;
    int yCoordinate;
    int inventoryPos = 0;
    InventoryObject inventory[10];

    bool capturePokimac(Pokimac toCapture);
    void addPokimac(Pokimac toAdd);
    void moveRight();
    void moveLeft();
    void moveUp();
    void moveDown();
    bool askToCome(Pokimac toCome);
    void battle(Pokimac toBattle);
    void addObject(InventoryObject toAdd);
    Pokimac getPokimac(string name);
    void displayPokimacs();

};