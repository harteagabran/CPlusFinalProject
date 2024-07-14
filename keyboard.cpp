#include "keyboard.h"
#include <iostream>
#include <map>
#include <string>
#include <memory>

Keyboard::Keyboard(std::string selection, double cost) {
    name = selection;
    keyboardCost = cost;

}
//map of each selection


// Validates and confirms users selection
void Keyboard::keyboardSelection() {
    std::map<std::string, double>keyboards;

    keyboards["Yamaha PSR-E473"] = 369.99 ;
    keyboards["Yamaha PSR-SX600"] = 1099.99;
    keyboards["Yamaha PSR SX700"] = 1599.99;
    keyboards["Yamaha PSR SX900"] = 2299.99;
    if (keyboards.count(name) > 0) {
        std::cout << "You have selected " << name << " which costs $" << keyboardCost << std::endl;
    }
    else {
        std::cout << name << " is not an available option please try again." << std::endl;
    }
}




//display map of keyboards
void Keyboard::displayKeyboards() {
    std::map<std::string, double>keyboards;

    keyboards["Yamaha PSR-E473"] = 369.99 ;
    keyboards["Yamaha PSR-SX600"] = 1099.99;
    keyboards["Yamaha PSR SX700"] = 1599.99;
    keyboards["Yamaha PSR SX900"] = 2299.99;

    std::map<std::string, double>::iterator it = keyboards.begin();

    while (it != keyboards.end()) {
        std::cout << "Keyboard Name: " << it->first
                  << ", Cost: $" << it->second << std::endl;
        ++it;
    }

}
