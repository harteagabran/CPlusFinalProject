#include "drumset.h"

Drumset::Drumset(string name, double drumCost) : name(name), drumCost(drumCost) {}

void Drumset::printSelection(map<string, double> selectedItems) {
    map<string, double>drumsets;

    drumsets["Backbeat-Elite"] = 799;
    drumsets["Dominion-Birch"] = 799;
    drumsets["Centenial-Zep"] = 1299;
    drumsets["RGD0520"] = 799;

    if (drumsets.count(name) > 0) {
        cout << "You have selected " << name << " which costs $" << drumCost << endl;
        selectedItems[name] = drumCost;
    }
    else {
        cout << name << " is not an available option please try again." << endl;
        drumCost = 0;
    }
}

void Drumset::removeSelection(map<string, double> selectedItems) {
    if (selectedItems.count(name) > 0) {
        cout << " You have removed" << name << " from the budget." << endl;
        selectedItems.erase(name);
    } else {
        cout << name << " not found." << endl;
        drumCost = 0;
    }
}

void Drumset::displayMap() {
    map<string, double>drumsets;

    drumsets["Backbeat-Elite"] = 799;
    drumsets["Dominion-Birch"] = 799;
    drumsets["Centenial-Zep"] = 1299;
    drumsets["RGD0520"] = 799;

    map<string, double>::iterator it = drumsets.begin();

    while (it != drumsets.end()) {
        cout << "Drumset Name: " << it->first
             << ", Cost: $" << it->second << endl;
        ++it;
    }
}

double Drumset::returnCost() {
    return drumCost;
}

string Drumset::returnName() {
    return name;
}
