#include <iostream>
#include <string>
#include <vector>
#include "Pokimac.h"
#include "InventoryObject.h"
#include "Displayer.h"
using namespace std;

class Player {     
       
  public:           
    
    string name;
    string img;
    vector<Pokimac> pokemonTeam;
    int xCoordinate;
    int yCoordinate;
    vector<InventoryObject> inventory;
    Displayer display;

    Player();

    bool capturePokimac(Pokimac toCapture);
    void addPokimac(Pokimac toAdd);
    void removePokimac(string name);
    void moveRight();
    void moveLeft();
    void moveUp();
    void moveDown();
    bool askToCome(Pokimac toCome);
    void battle(Pokimac toBattle);
    void addObject(InventoryObject toAdd);
    void removeObject(string name);
    void displayInventory();
    Pokimac getPokimac(string name);
    void displayPokimacs();

};