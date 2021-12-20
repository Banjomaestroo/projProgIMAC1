#include "Displayer.h"

void Displayer :: displayPokimacs(vector<Pokimac> pokis){
    
    ConsoleUtils::clear();
    bool exitLoop = false;
    int index = 0;
    int size = pokis.size();
    pokis.at(index).displayCharacteristics();
		while (!exitLoop) {

			int c = ConsoleUtils::getChar();
            
			if(c == 'q') {

                exitLoop = true;
				
			}else{

                switch (c) {
					case ConsoleUtils::KEY_LEFT: 
                    ConsoleUtils::clear();
                    if(index>0){ 
                        //cout << "hmmmm";
                        index--; 
                        pokis.at(index).displayCharacteristics();
                    }else{
                        //cout << "hmmmm";
                        index = size-1;
                        pokis.at(index).displayCharacteristics();
                        
                    }break; 
					case ConsoleUtils::KEY_RIGHT: 
                    ConsoleUtils::clear();
                    if(index<size-1){  
                        index++; 
                        pokis.at(index).displayCharacteristics();
                    }else{
                        index = 0;
                        pokis.at(index).displayCharacteristics();
                    };
                    cout<<endl<<"----  Utilisez les flêches pour naviguer dans cette liste de pokimacs----"<<endl<<"----Appuyez sur q pour quitter----"<<endl<<index<<endl<<size<<endl;
                    break;
					default: break; 
                }
				 
			}
    }
}

void Displayer :: displayInventory(vector<InventoryObject> objects){
    
    bool exitLoop = false;
    int index = 0;
    int size = objects.size();
		while (!exitLoop) {

			int c = ConsoleUtils::getChar();
			if(c == 'q') {

                exitLoop = true;
				
			}else{

                switch (c) {
					case ConsoleUtils::KEY_LEFT: if(index<size){ 
                        index++; 
                        objects.at(index).displayCharacteristics();
                    }else{
                        index = 0;
                        objects.at(index).displayCharacteristics();
                        
                    } 
					case ConsoleUtils::KEY_RIGHT: if(index>0){  
                        index++; 
                        objects.at(index).displayCharacteristics();
                    }else{
                        index = size-1;
                        objects.at(index).displayCharacteristics();
                    };
                    cout<<endl<<"----  Utilisez les flêches pour naviguer dans cette liste de pokimacs----"<<endl<<"----Appuyez sur q pour quitter----";
                    break;
					default: break; 
                }
				 
			}
    }
}
