#ifndef GUITAR_H
#define GUITAR_H

#include "instrument.h"

class Guitar : public Instrument
{
private:
    string name;
    double guitarCost;
public:
    Guitar(string name, double guitarCost);
    void printSelection(map<string, double> selectedItems);
    void removeSelection(map<string, double> selectedItems);
    void displayMap();
    double returnCost();
    string returnName();
};

#endif // GUITAR_H
