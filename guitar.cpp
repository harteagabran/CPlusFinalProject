#include "guitar.h"

Guitar::Guitar(string name, double guitarCost) : name(name), guitarCost(guitarCost) { }

void Guitar::printSelection(map<string, double> selectedItems) {
    map<string, double> guitars;
    guitars["Stratocaster"] = 799;
    guitars["Telecaster"] = 799;
    guitars["SA-126"] = 1799;
    guitars["G5427T"] = 899;

    if (guitars.count(name) > 0) {
        cout << "You have selected " << name << " which costs $" << guitarCost << endl;
        selectedItems[name] = guitarCost;
    } else {
        cout << name << " is not an available option please try again." << endl;
        guitarCost = 0;
    }
}

void Guitar::removeSelection(map<string, double> selectedItems) {
    if (selectedItems.count(name) > 0) {
        cout << "You have removed " << name << " from the budget." << endl;
        selectedItems.erase(name);
    } else {
        cout << name << " not found." << endl;
        guitarCost = 0;
    }
}

void Guitar::displayMap() {
    map<string, double> guitars;
    guitars["Stratocaster"] = 799;
    guitars["Telecaster"] = 799;
    guitars["SA-126"] = 1799;
    guitars["G5427T"] = 899;

    map<string, double>::iterator it = guitars.begin();

    while (it != guitars.end()) {
        cout << "Guitar Name: " << it->first
             << ", Cost: $" << it->second << endl;
        ++it;
    }
}

double Guitar::returnCost() {
    return guitarCost;
}

string Guitar::returnName() {
    return name;
}

