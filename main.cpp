#include <iostream>
#include <memory>
#include <string>
#include "budgetbalance.h"
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

    map<string, double> selectedItems;


     int choice;

        displayMenu();
        cin >> choice;

        while(choice != 4){
        // Add Instrument
        if (choice == 1) {
            Instrument* instrument = Instrument::createInstrument();
            instrument->printSelection(selectedItems);
            bandBudget.addExpense(instrument->returnCost());
            cout << "added" << endl;

        // delete instrument
        } else if (choice == 2) {
            Instrument* instrument = Instrument::createInstrument();

            instrument->removeSelection(selectedItems);

        //bandBudget.removeInstrument(instrumentName);
            bandBudget.addToBudget(instrument->returnCost());
        cout << "deleted" << endl;

        //budget check
    } else if (choice == 3) {
        bandBudget.displayBudget();



    } else {
        cout << "try again" << endl;
    }

    displayMenu();
    cin >> choice;
        }
    return 0;
}
