#include "InventoryObject.h"


InventoryObject :: InventoryObject(string name2, string description2, string img2, int quantity2){
    name = name2;
    description = AsciiGetter().getAscii(img2);
    img = img2;
    quantity = quantity2;

}

void InventoryObject :: displayCharacteristics(){

    cout << endl << name << endl << quantity << endl << description << img << endl ;
}