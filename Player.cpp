#include <Player.h>

bool Player :: capturePokimac(Pokimac toCapture){

    if(toCapture.isCaptured()){
        addPokimac(toCapture);
        return true;
    }else{
        return false;
    }
}

void Player :: addPokimac(Pokimac toAdd){

    pokemonTeam[pokeTeamPos] = toAdd;
    pokeTeamPos++;

}

void Player :: moveRight(){

    xCoordinate++;

}

void Player :: moveLeft(){

    xCoordinate--;

}

void Player :: moveUp(){

    yCoordinate++;

}

void Player :: moveDown(){

    yCoordinate--;

}

bool Player :: askToCome(Pokimac toCome){

    int comes = rand() %101;
    if(toCome.percentageToCome<=comes){
        addPokimac(toCome);
        return true;
    }else{
        return false;
    }

}

void Player :: battle(Pokimac toBattle){

}

void Player :: addObject(InventoryObject toAdd){

}

void Player :: displayPokimacs(){

    for(Pokimac &poki : pokemonTeam){
       poki.displayCaracteristics();     
    }

}

Pokimac Player :: getPokimac(string name){

    for(Pokimac &poki : pokemonTeam){
            if(poki.name == name){
                return poki;
            }
        }

    cout << "no Pokimac found";
}
