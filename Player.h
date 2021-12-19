#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Pokimac.h"
#include "InventoryObject.h"
using namespace std;

class Player {     
       
  public:           
    
    string name;
    string img;
    vector<Pokimac> pokemonTeam;
    int xCoordinate;
    int yCoordinate;
    vector<InventoryObject> inventory;

    void PlayerI();

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