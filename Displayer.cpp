#include "Displayer.h"

void Displayer :: displayPokimacs(vector<Pokimac> pokis, bool pokedex, int* pointer){
    
    ConsoleUtils::clear();
    bool exitLoop = false;
    int index = 0;
    int size = pokis.size();
    
    string pokedexString = "";
    if(pokedex)
        pokedexString = getter.getAscii("pokedex");
    cout << pokedexString;
    pokis.at(index).displayCharacteristics();
    cout<<endl<<endl<<"----  Utilisez les flêches pour naviguer dans cette liste de pokimacs----"<<endl<<endl<<"----Appuyez sur q pour quitter----"<<endl;
		while (!exitLoop) {

			int c = ConsoleUtils::getChar();
            
			if(c == 'q') {

                exitLoop = true;
				
			}else{

                switch (c) {
                    
					case ConsoleUtils::KEY_LEFT: 
                    ConsoleUtils::clear();
                    cout << pokedexString;
                    if(index>0){ 
                        index--; 
                        pokis.at(index).displayCharacteristics();
                    }else{
                        index = size-1;
                        pokis.at(index).displayCharacteristics();
                        
                    }cout<<endl<<endl<<"----  Utilisez les flêches pour naviguer dans cette liste de pokimacs----"<<endl<<endl <<"----Appuyez sur q pour quitter----"<<endl;
                    break; 
					case ConsoleUtils::KEY_RIGHT: 
                    ConsoleUtils::clear();
                    cout << pokedexString;
                    if(index<size-1){  
                        index++; 
                        pokis.at(index).displayCharacteristics();
                    }else{
                        index = 0;
                        pokis.at(index).displayCharacteristics();
                    };
                    cout<<endl<<endl<<"----  Utilisez les flêches pour naviguer dans cette liste de pokimacs----"<<endl<<endl <<"----Appuyez sur q pour quitter----"<<endl;
                    break;
					default: break; 
                }
				 
			}
    }
}

void Displayer :: displayInventory(vector<InventoryObject> objects){
    
    ConsoleUtils::clear();
    bool exitLoop = false;
    int index = 0;
    int size = objects.size();
    cout << getter.getAscii("inventory");
    objects.at(index).displayCharacteristics();
    cout<<endl<<endl<<"----  Utilisez les flêches pour naviguer dans cette liste de pokimacs----"<<endl<<endl<<"----Appuyez sur q pour quitter----"<<endl;
		while (!exitLoop) {

			int c = ConsoleUtils::getChar();
            
			if(c == 'q') {

                exitLoop = true;
				
			}else{

                switch (c) {
					case ConsoleUtils::KEY_LEFT: 
                    ConsoleUtils::clear();
                    cout << getter.getAscii("inventory");
                    if(index>0){ 
                        index--; 
                        objects.at(index).displayCharacteristics();
                    }else{
                        index = size-1;
                        objects.at(index).displayCharacteristics();
                        
                    }cout<<endl<<endl<<"----  Utilisez les flêches pour naviguer dans cette liste de pokimacs----"<<endl<<endl<<"----Appuyez sur q pour quitter----"<<endl;
                    break; 
					case ConsoleUtils::KEY_RIGHT: 
                    ConsoleUtils::clear();
                    cout << getter.getAscii("inventory");
                    if(index<size-1){  
                        index++; 
                        objects.at(index).displayCharacteristics();
                    }else{
                        index = 0;
                        objects.at(index).displayCharacteristics();
                    };
                    cout<<endl<<endl<<"----  Utilisez les flêches pour naviguer dans cette liste de pokimacs----"<<endl<<endl<<"----Appuyez sur q pour quitter----"<<endl;
                    break;
					default: break; 
                }
				 
			}
    }
}
