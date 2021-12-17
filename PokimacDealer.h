#include <iostream>
#include <string>
#include "Pokimac.h"
using namespace std;

class PokimacDealer {     
       
  public:           
    
    string species;
    string img;
    Pokimac collection[50];

    void generatePokimacs();
    Pokimac getPokimac(int id);
    
};