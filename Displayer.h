#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Pokimac.h"
#include "InventoryObject.h"
#include "AsciiGetter.h"
using namespace std;

class Displayer {     
       
  public:           
    AsciiGetter getter;
    void displayMenu(string name);
    void displayPokimacs(vector<Pokimac> myPokis, bool pokedex, int* pointer);
    void displayInventory(vector<InventoryObject> myObjects);

};