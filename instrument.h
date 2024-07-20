#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <string>
#include <map>
#include <iostream>

using namespace std;

class Instrument {
private:
public:
    //prints the selection and the cost and is supposed to add it to the map of selected items.
    virtual void printSelection(map<string, double> selectedItems) = 0;

    //Supposed to check map for the inputted item and remove it.
    virtual void removeSelection(map<string, double> selectedItems) = 0;

    virtual void displayMap() = 0;


    virtual double returnCost() = 0;

    static Instrument* createInstrument();
};

#endif // INSTRUMENT_H
