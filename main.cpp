#include <iostream>
#include <string>
#include "Player.h"
#include "Menu.h"
#include "Carte.h"

using namespace std;

void play();
bool correctInput(string input);
void displayMapLimit(string direction);
void initialize();
void createPokimacs();
void pokedex();
void control();
void displayMenu(string name);

Player thePlayer;
Carte theCarte;
AsciiGetter myGetter;
Displayer display;


int main(int argc, char *argv[]) {

    initialize();
}

void initialize(){
    
    displayMenu("bienvenue");
    displayMenu("guide");

    control();

}

void displayMenu(string name){

    ConsoleUtils::clear();
    cout << myGetter.getAscii(name);
    ConsoleUtils::getChar();
}

void sleep(int x){

    std::this_thread::sleep_for(std::chrono::milliseconds(x));

}

void pokedex(){

    display.displayPokimacs(theCarte.pokimac,true);
}

void control(){

    bool exitLoop = false;
		while (!exitLoop) {
			int c = ConsoleUtils::getChar();
            if(c == 'q'){
                exitLoop = true;
            }else if(c == 'g') displayMenu("guide");
            else if(c == 'p') pokedex();
            else if(c == 'i') thePlayer.displayInventory();
            else theCarte.displayCarte();
        }

}
