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


int main(int argc, char *argv[]) {

    initialize();
}

void initialize(){

    cout << "Choose your username" << endl ;
    cin >> thePlayer.name;
    cout << thePlayer.name;

    thePlayer.displayPokimacs();
    sleep(4);
    thePlayer.displayInventory();
    sleep(4);
    theCarte.displayCarte();
}

void sleep(int x){

    std::this_thread::sleep_for(std::chrono::milliseconds(x));

}

