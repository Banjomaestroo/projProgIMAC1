#pragma once
#include <iostream>
#include <string>
#include "consoleUtils.hpp"
using namespace std;

class Type {     
       
  public:           
    
    string name;
    string description;
    ConsoleUtils::Color color;

    Type();
    Type(string name2);

};