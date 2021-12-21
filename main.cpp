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
    
    display.displayMenu("bienvenue");
    ConsoleUtils::getChar();
    display.displayMenu("guide");

    control();

}

void sleep(int x){

    std::this_thread::sleep_for(std::chrono::milliseconds(x));

}

void pokedex(int* c){

    display.displayPokimacs(theCarte.pokimac,true,c);
}

void control(){

    bool exitLoop = false;
    bool first = true;
    int d;
    int c;
    
		while (!exitLoop) {
            if(d==c || first) c = ConsoleUtils::getChar();
            int d  = c;
            int* p = &c;
            if(c == 'q') exitLoop = true;
            else if(c == 'g') display.displayMenu("guide");
            else if(c == 'p') pokedex(p);
            else if(c == 'i') thePlayer.displayInventory();
            else theCarte.displayCarte();
        }

}
