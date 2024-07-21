#include "bass.h"

Bass::Bass(string name, double bassCost) : name(name), bassCost(bassCost) {}

void Bass::printSelection(map<string, double> selectedItems) {
    map<string, double>basses;
    basses["Jazz"] = 799;
    basses["Precision"] = 799;
    basses["Vibe"] = 469;
    basses["StingRay5"] = 2699;

    if (basses.count(name) > 0) {
        cout << "You have selected " << name << " which costs $" << bassCost << endl;
        selectedItems[name] = bassCost;
    }
    else {
        cout << name << " is not an available option please try again." << endl;
        bassCost = 0;
    }
}

void Bass::removeSelection(map<string, double> selectedItems) {
    if (selectedItems.count(name) > 0) {
        cout << " You have removed" << name << " from the budget." << endl;
        selectedItems.erase(name);
    } else {
        cout << name << " not found." << endl;
        bassCost = 0;
    }
}

void Bass::displayMap() {
    map<string, double>basses;
    basses["Jazz"] = 799;
    basses["Precision"] = 799;
    basses["Vibe"] = 469;
    basses["StingRay5"] = 2699;

    std::map<string, double>::iterator it = basses.begin();

    while (it != basses.end()) {
        cout << "Bass Name: " << it->first
             << ", Cost: $" << it->second << endl;
        ++it;
    }
}

double Bass::returnCost() {
    return bassCost;
}

string Bass::returnName() {
    return name;
}
