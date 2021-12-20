#pragma once
#include <iostream>
#include <string>
#include "AsciiGetter.h"
#include "consoleUtils.hpp"
using namespace std;

class InventoryObject {     
       
  public:           
    
    string name;
    string description;
    string img;
    int quantity;

    InventoryObject(string name2, string description2, string img2, int quantity2);
    void displayCharacteristics();

};