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
    void displayPokimacs(vector<Pokimac> myPokis, bool pokedex);
    void displayInventory(vector<InventoryObject> myObjects);

};