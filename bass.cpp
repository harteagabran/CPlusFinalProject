#include "bass.h"
#include <iostream>
#include <map>
#include <string>
#include <memory>

Bass::Bass(std::string selection, double cost) {
    name = selection;
    bassCost = cost;

}
//map of each selection



// Validates and confirms users selection
void Bass::bassSelection() {

    std::map<std::string, double>basses;
    basses[""] = 0;
    basses[""] = 0;
    basses[""] = 0;
    basses[""] = 0;

    if (basses.count(name) > 0) {
        std::cout << "You have selected " << name << " which costs $" << bassCost << std::endl;
    }
    else {
        std::cout << name << " is not an available option please try again." << std::endl;
    }
}




//display map of basses
void Bass::displayBasses() {
    std::map<std::string, double>basses;
    basses[""] = 0;
    basses[""] = 0;
    basses[""] = 0;
    basses[""] = 0;

    std::map<std::string, double>::iterator it = basses.begin();

    while (it != basses.end()) {
        std::cout << "Bass Name: " << it->first
                  << ", Cost: $" << it->second << std::endl;
        ++it;
    }

}
