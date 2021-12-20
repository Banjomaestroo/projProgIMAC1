#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Pokimac.h"
#include "InventoryObject.h"
using namespace std;

class Displayer {     
       
  public:           
    
    void displayPokimacs(vector<Pokimac> myPokis);
    void displayInventory(vector<InventoryObject> myObjects);

};