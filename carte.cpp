#include "Carte.h"

Tile Carte :: getCase(int x, int y){

}

void Carte :: setPlayerPos(int x, int y){
    tiles[y][x].img = "P";
}

void Carte :: generateTiles(){

    for(int i =0; i<height; i++){

        for(int y=0; y<height; y++){
            int random = (rand()%3)+1;
            tiles[i][y] = Tile(random);
        }
    }
  
}



void Carte :: displayCarte(){

    ConsoleUtils::clear();
    unsigned int textOffset = 2; // my call to setCursorPos must be shifted by 2 because I display 3 sentences above before.

		struct Position {
			unsigned int x;
			unsigned int y;
		};

		Position pos = {width / 2, height / 2};

		// Display my tab at origin (0,0)
		ConsoleUtils::setCursorPos(0, 0 + textOffset);
		for (unsigned int j=0; j<height; j++) {
			for (unsigned int i=0; i<width; i++) {
				std::cout << tiles[j][i].img;
			}
			std::cout << std::endl;
		}

		ConsoleUtils::setCursorPos(pos.x, pos.y + textOffset);
		std::cout << '@'; // Output '@' at my position

		bool exitLoop = false;
		while (!exitLoop) {
			bool special = false;
			int c = ConsoleUtils::getChar(&special);

			Position oldPos = pos;

			if(special) {
				switch (c) {
					case ConsoleUtils::KEY_UP: if(pos.y>0) --pos.y; break;
					case ConsoleUtils::KEY_DOWN: if(pos.y<height-1) ++pos.y; break;
					case ConsoleUtils::KEY_LEFT: if(pos.x>0) --pos.x; break;
					case ConsoleUtils::KEY_RIGHT: if(pos.x<width-1) ++pos.x; break;
					default: break;
				}
			}else if (c == ' ') {
				 exitLoop = true;
			}

			// if my position change
			if(oldPos.x != pos.x || oldPos.y != pos.y) {
				ConsoleUtils::setCursorPos(oldPos.x, oldPos.y + textOffset);
				std::cout << tiles[oldPos.y*width+oldPos.x]; // Clean up my current location by showing what is in my tab
				ConsoleUtils::setCursorPos(pos.x, pos.y + textOffset);
				std::cout << '@'; // Output '@' at my position
			}
        }
  
}
