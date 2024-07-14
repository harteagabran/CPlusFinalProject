#include "guitar.h"
#include <iostream>
#include <map>
#include <string>
#include <memory>

Guitar::Guitar(std::string selection, double cost) {
    name = selection;
    guitarCost = cost;

}
//map of each selection


// Validates and confirms users selection
void Guitar::guitarSelection() {
    std::map<std::string, double>guitars;

    guitars[""] = 0;
    guitars[""] = 0;
    guitars[""] = 0;
    guitars[""] = 0;

    if (guitars.count(name) > 0) {
        std::cout << "You have selected " << name << " which costs $" << guitarCost << std::endl;
    }
    else {
        std::cout << name << " is not an available option please try again." << std::endl;
    }
}




//display map of guitars
void Guitar::displayGuitars() {
    std::map<std::string, double>guitars;

    guitars[""] = 0;
    guitars[""] = 0;
    guitars[""] = 0;
    guitars[""] = 0;

    std::map<std::string, double>::iterator it = guitars.begin();

    while (it != guitars.end()) {
        std::cout << "Guitar Name: " << it->first
                  << ", Cost: $" << it->second << std::endl;
        ++it;
    }

}
