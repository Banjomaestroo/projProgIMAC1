#include "Tile.h"

Tile :: Tile(int rand){
    if(rand == 1){
        img = "T";
    }else if (rand == 2){
        img = "B";
    }
}
void Tile :: addPokimac(Pokimac toAdd){

    pokimac = toAdd;
    
}