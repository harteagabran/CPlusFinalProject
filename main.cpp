#include <iostream>
#include <memory>
#include <string>
#include "budgetbalance.h"
#include "inventory.h"
#include <map>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <string>
#include "instrument.h"
#include "drumset.h"
#include "bass.h"
#include "guitar.h"
#include "keyboard.h"


using namespace std;

void displayMenu() {
    cout << "         Menu" << endl;
    cout << "----------------------------" << endl;
    cout << "1. add instrument" << endl;
    cout << "2. remove instrument" << endl;
    cout << "3. view budget" << endl;
    cout << "4. quit" << endl;
    cout << "enter your choice: ";
}

//Main
int main() {
    double initialBudget;
    cout << "initial budget: ";
    cin >> initialBudget;

    BudgetBalance bandBudget(initialBudget);
    Inventory inventory(bandBudget);
    map<string, double> selectedItems;


     int choice;

        displayMenu();
        cin >> choice;

        while(choice != 4){
        // Add Instrument
        if (choice == 1) {
            shared_ptr<Instrument> instrument(Instrument::createInstrument());
            instrument->printSelection(selectedItems);
            //bandBudget.addExpense(instrument->returnCost());
            inventory.addInstrument(instrument);
            cout << "added" << endl;

        // delete instrument
        } else if (choice == 2) {
            //Halmar - updated deleteon using the new class
            int id;
            inventory.displayInventory();
            cout << "Enter instrument ID to remove: ";
            cin >> id;

            //check if successful
            if(inventory.removeInstrument(id)) {
                cout << "Succesfully removed instrument with ID " << id << endl;
            }

            /*
            Instrument* instrument = Instrument::createInstrument();

            instrument->removeSelection(selectedItems);

        //bandBudget.removeInstrument(instrumentName);
            bandBudget.addToBudget(instrument->returnCost());
        cout << "deleted" << endl;
            */



        //budget check
    } else if (choice == 3) {
            inventory.displayInventory();



    } else {
        cout << "try again" << endl;
    }

    displayMenu();
    cin >> choice;
        }
    return 0;
}
