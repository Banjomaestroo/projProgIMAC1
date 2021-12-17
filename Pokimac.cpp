#include <Pokimac.h>

void Pokimac :: removeHealthPoints(int toRemove){
    
    healthPoint-=toRemove;
    if(healthPoint<=0){
        isDead = true;
    }

}

bool Pokimac :: isCaptured(){

    int capture = rand() % 101;
    if((healthPoint/maxHealth)<= capture){
        return true;
    }else{
        return false;
    }

}

int Pokimac :: attack(){

    return strength;

}

void Pokimac :: feed(){

}

void Pokimac :: displayCaracteristics(){

}
