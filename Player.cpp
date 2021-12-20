#include "Player.h"

/*Player :: Player(string name2){
    name = name2;
}*/

Player :: Player(){

    InventoryObject pokeball = InventoryObject("Pokeball", "Je sais pas à quoi ça sert, demerde toi", "pokeball", 5);
    addObject(pokeball);
    Pokimac startingPokimac = Pokimac("Soulakmeche", "soulakmeche","Oz", "Je crois que c'est un genre de prof, mais c'est à vérifier. Sa voix et son énergie dévastatrice m'ont traumatisé dès le premier jour",10,40,50,0);
    addPokimac(startingPokimac);
}

bool Player :: capturePokimac(Pokimac toCapture){

    if(toCapture.isCaptured()){
        addPokimac(toCapture);
        return true;
    }else{
        return false;
    }
}

void Player :: addPokimac(Pokimac toAdd){

    pokemonTeam.push_back(toAdd);

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

    inventory.push_back(toAdd);

}

void Player :: displayPokimacs(){

    display.displayPokimacs(pokemonTeam);
    
    /*cout <<endl<<endl <<"---------------------VOS POKEMON---------------------"<<endl<<endl;
    for(vector<Pokimac>::iterator it = pokemonTeam.begin(); it != pokemonTeam.end(); ++it) {
        (*it).displayCharacteristics();
    }*/
}


Pokimac Player :: getPokimac(string name){


    for(vector<Pokimac>::iterator it = pokemonTeam.begin(); it != pokemonTeam.end(); ++it) {
    
            if((*it).name == name){
                return *it;
            }
        }

    cout << "no Pokimac found";
}

void Player :: removePokimac(string name){

        for(vector<Pokimac>::iterator it = pokemonTeam.begin(); it != pokemonTeam.end(); ++it) {
    
            if((*it).name == name){
                pokemonTeam.erase(it);
            }
        }
}

void Player :: removeObject(string name){
    for(vector<InventoryObject>::iterator it = inventory.begin(); it != inventory.end(); ++it) {
    
            if((*it).name == name){
                inventory.erase(it);
            }
        }
}

void Player :: displayInventory(){

    display.displayInventory(inventory);
    /*cout <<endl<<endl<< "---------------------CONTENU DE VOTRE INVENTAIRE---------------------"<<endl<<endl;
    for(vector<InventoryObject>::iterator it = inventory.begin(); it != inventory.end(); ++it) {
        (*it).displayCharacteristics();
    }*/

}