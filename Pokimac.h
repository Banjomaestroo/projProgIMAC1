#pragma once
#include <iostream>
#include <string>
#include "AsciiGetter.h"
using namespace std;

class Pokimac {     
       
  public:           
    
    string species;
    string img;
    string name;
    string description;
    int maxHealth;
    int healthPoint;
    int strength;
    int defense;
    int xCoordinate;
    int yCoordinate;
    int percentageToCome;
    bool isDead;


    Pokimac(string species2, string img2, string name2, string description2, int maxHealth2, int strength2, int defense2, int percentageToCome2);

    Pokimac();

    void removeHealthPoints(int toRemove);
    bool isCaptured();
    int attack();
    void feed();
    void setCoordinates(int a, int b);
    void displayCaracteristics(); 
};
