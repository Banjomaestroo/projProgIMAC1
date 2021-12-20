#include "InventoryObject.h"


InventoryObject :: InventoryObject(string name2, string description2, string img2, int quantity2){
    name = name2;
    description = description2;
    img = AsciiGetter().getAscii(img2);
    quantity = quantity2;

}

void InventoryObject :: displayCharacteristics(){

    cout << endl << "Nom : "<< name << endl<<endl<< "Quantité dans votre inventaire : " << quantity << endl<<endl << "Description : " << description << endl<<endl << img << endl ;
}