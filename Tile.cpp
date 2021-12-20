#include "Tile.h"

Tile :: Tile(){}

Tile :: Tile(int rand){
    if(rand == 1){
        img = ".";
    }else if (rand == 2){
        img = "*";
    }
}
void Tile :: addPokimac(Pokimac toAdd){

    pokimac = toAdd;
    
}