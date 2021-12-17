#include <iostream>
#include <string>
using namespace std;

class Pokimac {     
       
  public:           
    
    string species;
    string img;
    int healthPoint;
    int strength;
    int defense;
    int xCoordinate;
    int yCoordinate;

    void removeHealthPoints(int toRemove);
    bool isCaptured();
    int attack();
    void feed();
    void displayCaracteristics();
}