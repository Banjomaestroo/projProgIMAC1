#include <iostream>
#include <string>
using namespace std;

class Pokimac {     
       
  public:           
    
    string species;
    string img;
    string name;
    int maxHealth;
    int healthPoint;
    int strength;
    int defense;
    int xCoordinate;
    int yCoordinate;
    int percentageToCome;
    bool isDead = false;

    void removeHealthPoints(int toRemove);
    bool isCaptured();
    int attack();
    void feed();
    void displayCaracteristics(); //
};