#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include "Player.h"
#include "Menu.h"

using namespace std;

void play();
bool correctInput(string input);
void displayMapLimit(string direction);
void initialize();
void createPokimacs();

const int maxX = 20;
const int maxY = 50;
int x;
int y;
Player thePlayer;

typedef struct Map{
    int tableaux[20][50];

} Map;

void initialize(){

    cout << "Choose your username" << endl ;
    cin >> thePlayer.name;



}

int main() {

    //play();
    
    return 0;
}

void sdlTesterroo(){



    

	// retutns zero on success else non-zero
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printf("error initializing SDL: %s\n", SDL_GetError());
	}
	SDL_Window* win = SDL_CreateWindow("GAME",
									SDL_WINDOWPOS_CENTERED,
									SDL_WINDOWPOS_CENTERED,
									1000, 1000, 0);
	while (1);



}

void play(){
    
    bool continuer = true;
    string direction = "wasso";
    int x = 0;
    int y = 0;

    while (continuer){

        do{

            cout << "Ou voulez-vous, vous déplacer ? " << endl << "Droite (d), Gauche (g), Haut (h), Bas (b)"<<endl;
            cin >> direction;
        }while(correctInput(direction));
        cout << "wass";

    }
}

bool correctInput(string input){

    if(input == "d"){
        if(x == 20){
            displayMapLimit("a droite");
            return false;
        }
        x++;
        cout << x << endl;
        return true;
    }
    if(input == "g"){
        if(x == 0){
            displayMapLimit("a gauche");
            return false;
        }
        x--;
        return true;
    }
    if(input == "h"){
        if(y == 50){
            displayMapLimit("en haut");
            return false;
        }
        y++;
        return true;
    }
    if(input == "b"){
        if(y == 0){
            displayMapLimit("en bas");
            return false;
        }
        y--;
        return true;
    }
    else
    return false;
}

void displayMapLimit(string direction){
    cout << "Vous ne pouvez pas aller "+ direction +", vous êtes à la limite de la carte" << endl;
}

    



