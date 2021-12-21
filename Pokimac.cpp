#include "Pokimac.h"


Pokimac :: Pokimac(string species2, string img2, string name2, string description2, int maxHealth2, int strength2, int defense2, int percentageToCome2, string type2){

      species = species2;
      img = AsciiGetter().getAscii(img2);
      name = name2;
      description = description2;
      maxHealth = maxHealth2;
      healthPoint = maxHealth2;
      strength = strength2;
      defense = defense2;
      percentageToCome = percentageToCome2;
      isDead = false;
      type = Type(type2);

    }

Pokimac :: Pokimac(){

}    

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

void Pokimac :: displayCharacteristics(){

    cout << endl <<"Nom : "<< name << endl << endl << "Description : "<< description << endl<< endl << "Espèce : " << species <<endl << endl;
    ConsoleUtils::setColor(type.color);
    cout << img;
    ConsoleUtils::resetColors();
     cout <<endl<< endl << "point de vie : "<< maxHealth<< endl<<"point d'attaques : "<<strength<<endl<< "point de défenses: "<<defense<<endl;

}

void Pokimac :: setCoordinates(int a, int b){
    xCoordinate = a;
    yCoordinate = b;
}