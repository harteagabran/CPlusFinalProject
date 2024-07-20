#include "inventory.h"
#include <iostream>

Inventory::Inventory(BudgetBalance& budget) : nextId(1), budget(budget) {}

void Inventory::addInstrument(shared_ptr<Instrument> instrument) {
    //add instrument to inventory with id
    int id = nextId++;
    instruments[id] = instrument;

    //update budget to take away it's cost
    budget.addExpense(instrument->returnCost());
}

//remove instrument by id
bool Inventory::removeInstrument(int id) {
    auto delinstrument = instruments.find(id);

    //if found
    if(delinstrument != instruments.end()) {
        //add amount to budget
        budget.addExpense(-1 * delinstrument->second->returnCost());
        instruments.erase(delinstrument);
        //return true to show success in removing
        return true;
    } else {
        std::cout << "Instrument with ID " << id << " not found." << std::endl;
        return false;
    }
}

//show all the instruments
void Inventory::displayInventory() const {
    //show budget as well
    budget.displayBudget();
    std::cout << "Instruments\n\t";
    for(const auto& ins : instruments) {
        std::cout << ins.first << ". Instrument: " << ins.second << "\n\t";
    }
    std::cout << endl;
}
