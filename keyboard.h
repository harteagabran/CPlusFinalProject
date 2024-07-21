#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "instrument.h"

class Keyboard : public Instrument {
private:
    string name;
    double keyboardCost;
public:
    Keyboard(string name, double keyboardCost);
    void printSelection(map<string, double> selectedItems);
    void removeSelection(map<string, double> selectedItems);
    void displayMap();
    double returnCost();
    string returnName();
};

#endif // KEYBOARD_H
