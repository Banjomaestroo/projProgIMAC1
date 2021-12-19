#include "InventoryObject.h"


InventoryObject :: InventoryObject(string name2, string description2, string img2, int quantity2){
    name = name2;
    description = description2;
    img = AsciiGetter().getAscii(img2);
    quantity = quantity2;

}

void InventoryObject :: displayCharacteristics(){

    cout << endl << name << endl << quantity << endl << description << endl << img << endl ;
}