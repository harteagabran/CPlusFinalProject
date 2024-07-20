#ifndef INVENTORY_H
#define INVENTORY_H

#include <map>
#include <memory>
#include "instrument.h"
#include "budgetbalance.h"

using namespace std;
//Halmar
//  This class is made to hold and manage instruments and the budget, each instrument has an id to uniquely select them
class Inventory {
private:
    map<int, shared_ptr<Instrument>> instruments;
    int nextId;
    BudgetBalance& budget;

public:
    Inventory(BudgetBalance& budget);
    void addInstrument(shared_ptr<Instrument> instrument);
    bool removeInstrument(int id);
    void displayInventory() const;
};

#endif // INVENTORY_H
