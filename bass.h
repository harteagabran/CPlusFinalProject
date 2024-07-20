#ifndef BASS_H
#define BASS_H

#include "instrument.h"

class Bass : public Instrument
{
private:
    string name;
    double bassCost;
public:
    Bass(string name, double bassCost);
    void printSelection(map<string, double> selectedItems);
    void removeSelection(map<string, double> selectedItems);
    void displayMap();
    double returnCost();
};

#endif // BASS_H
