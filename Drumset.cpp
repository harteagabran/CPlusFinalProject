#include "Drumset.h"
#include <iostream>
#include <map>
#include <string>
#include <memory>

Drumset::Drumset(std::string selection, double cost) {
    name = selection;
    drumCost = cost;

}
//map of each selection


// Validates and confirms users selection
void Drumset::drumSelection() {
    std::map<std::string, double>drumsets;

    drumsets["Ludwig Backbeat Elite"] = 799.00;
    drumsets["ddrum Dominion Birch"] = 799.00;
    drumsets["Ludwig Centenial Zep"] = 1299.99;
    drumsets["Rogue RGD0520"] = 799.00;
    if (drumsets.count(name) > 0) {
        std::cout << "You have selected " << name << " which costs $" << drumCost << std::endl;
    }
    else {
        std::cout << name << " is not an available option please try again." << std::endl;
    }
}




//display map of drumsets
void Drumset::displayDrumsets() {
    std::map<std::string, double>drumsets;

    drumsets["Ludwig Backbeat Elite"] = 799.00;
    drumsets["ddrum Dominion Birch"] = 799.00;
    drumsets["Ludwig Centenial Zep"] = 1299.99;
    drumsets["Rogue RGD0520"] = 799.00;

    std::map<std::string, double>::iterator it = drumsets.begin();

    while (it != drumsets.end()) {
        std::cout << "Drumset Name: " << it->first
                  << ", Cost: $" << it->second << std::endl;
        ++it;
    }

}
