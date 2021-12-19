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

void Carte :: generatePokimacs(){
	pokimac[0] = Pokimac("Soulakmeche", "soulakmeche","Oz", "Je crois que c'est un genre de prof, mais c'est à vérifier. Sa voix et son énergie dévastatrice m'ont traumatisé dès le premier jour",10,40,50,0);

	pokimac[1] =Pokimac("Grobillzard", "grobizard","Gaga", "Qu'est ce le covid? Écoutez je ne pense pas qu'il y ait de bonnes ou de mauvaises folies",15,20,60,100);	

	pokimac[2] = Pokimac("BouffeDuChou", "pika","Miam", "C'est un rat. Il me fait penser à quelqu'un ... En tou cas lui il est chou, et toi t'es moche.",10,25,20,70);	  

	pokimac[3] = Pokimac("CaraMousse", "pouce","CaraPoucePlusFort", "Confiné, confiné, mais pas con fini. Du moins je crois pas, j'espere pas, du moins pas encore...",18,18,40,60);	  

	pokimac[4] = Pokimac("Papicha", "papillon", "YonPiPa", "Je crois pas en ... non pour moi ça ne peut pas exister, mais après libre à vous d'avoir tort.",12,20,78,20);

	pokimac[5] = Pokimac("GrasDouble", "doudou", "Grobese", "Moi aussi je suis à la recherche d'un doudou, veuillez laisser un cv à l'adresse suivante.", 40,80,20,10);

	pokimac[6] = Pokimac("Cheum", "couincouin", "CouinSait", "Il se cache les yeux tellement tu es cheum.",20,50,22,90);

	pokimac[7] = Pokimac("Moua", "moa", "MoaMoa","Je joue des mauvais tour. Heureusement que Steeve boit du cafe", 70,90,40,10);


}
