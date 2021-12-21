#include "Type.h"

Type::Type(){}

Type :: Type(string name){

    if(name == "water"){
        color = ConsoleUtils::LIGHTBLUE;
    }else if(name == "plant"){
        color = ConsoleUtils::GREEN;
    }else if(name == "psy"){
        color = ConsoleUtils::LIGHTMAGENTA;
    }else if(name == "lightning"){
        color = ConsoleUtils::LIGHTYELLOW;
    }else if(name == "fire"){
        color = ConsoleUtils::LIGHTRED;
    }
}