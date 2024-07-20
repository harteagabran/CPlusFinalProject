#ifndef DRUMSET_H
#define DRUMSET_H

#include "instrument.h"

class Drumset : public Instrument {
private:
    string name;
    double drumCost;
public:
    Drumset(string name, double drumCost);
    void printSelection(map<string, double> selectedItems);
    void removeSelection(map<string, double> selectedItems);
    void displayMap();
    double returnCost();
};

#endif // DRUMSET_H
