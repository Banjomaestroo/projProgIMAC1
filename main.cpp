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

void initialize(){

    cout << "Choose your username" << endl ;
    cin >> thePlayer.name;
    cout << thePlayer.name;
    thePlayer.PlayerI();
    //thePlayer.displayPokimacs();
    //thePlayer.displayInventory();



}

int main(int argc, char *argv[]) {

    initialize();


    
}
