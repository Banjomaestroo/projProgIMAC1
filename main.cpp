#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include "Player.h"
#include "Menu.h"
#include "Carte.h"

using namespace std;

void play();
bool correctInput(string input);
void displayMapLimit(string direction);
void initialize();
void createPokimacs();

Player thePlayer;
Carte theCarte;
AsciiGetter myGetter;
Displayer display;


int main(int argc, char *argv[]) {

    initialize();
}

void initialize(){

    ConsoleUtils::clear();
    cout << myGetter.getAscii("bienvenue");
    ConsoleUtils::getChar();

    ConsoleUtils::clear();
    cout << myGetter.getAscii("guide");
    ConsoleUtils::getChar();

    display.displayPokimacs(theCarte.pokimac);

}

void sleep(int x){

    std::this_thread::sleep_for(std::chrono::milliseconds(x));

}

