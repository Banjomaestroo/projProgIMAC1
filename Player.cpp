#include <Player.h>

void Player :: capturePokimac(Pokimac toCapture){

    pokemonTeam[pokeTeamPos] = toCapture;
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

void Player :: askToCome(Pokimac toCome){

    

}

void Player :: battle(Pokimac toBattle){

}

void Player :: addObject(InventoryObject toAdd){

}

void Player :: addPokimac(Pokimac toAdd){

}
