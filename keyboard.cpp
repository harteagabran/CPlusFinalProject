#include "keyboard.h"

Keyboard::Keyboard(string name, double keyboardCost) : name(name), keyboardCost(keyboardCost) { }

void Keyboard::printSelection(map<string, double> selectedItems) {
    map<string, double> keyboards;
    keyboards["PSR-E473"] = 369;
    keyboards["PSR-SX600"] = 1099;
    keyboards["PSR-SX700"] = 1599;
    keyboards["PSR-SX900"] = 2299;

    if (keyboards.count(name) > 0) {
        cout << "You have selected " << name << " which costs $" << keyboardCost << endl;
        selectedItems[name] = keyboardCost;
    } else {
        cout << name << " is not an available option please try again." << endl;
        keyboardCost = 0;
    }
}

void Keyboard::removeSelection(map<string, double> selectedItems) {
    if (selectedItems.count(name) > 0) {
        cout << "You have removed " << name << " from the budget." << endl;
        selectedItems.erase(name);
    } else {
        cout << name << " not found." << endl;
        keyboardCost = 0;
    }
}

void Keyboard::displayMap() {
    map<string, double> keyboards;
    keyboards["PSR-E473"] = 369;
    keyboards["PSR-SX600"] = 1099;
    keyboards["PSR-SX700"] = 1599;
    keyboards["PSR-SX900"] = 2299;

    map<string, double>::iterator it = keyboards.begin();

    while (it != keyboards.end()) {
        cout << "Keyboard Name: " << it->first
             << ", Cost: $" << it->second << endl;
        ++it;
    }
}

double Keyboard::returnCost() {
    return keyboardCost;
}
