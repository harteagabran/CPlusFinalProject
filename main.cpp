#include <iostream>
#include <memory>
#include <string>
#include "budgetbalance.h"

/*The file's to make
#include "ercussion.h"
#include "Brass.h"
#include "Woodwind.h"
#include "Stringed.h"
*/

using namespace std;


//MENU
void displayMenu() {
    cout << "         Menu" << endl;
    cout << "----------------------------" << endl;
    cout << "1. add instrument" << endl;
    cout << "2. remove instrument" << endl;
    cout << "3. view budget" << endl;
    cout << "4. quit" << endl;
    cout << "enter your choice: ";
}


//not sure what exactly do they want for their band so i just classified them by type
//OBJECT making instruments
shared_ptr<Instrument> createInstrument(const string& type, const string& name, double cost) {
    if (type == "Percussion") {
        return make_shared<Percussion>(name, cost);
    } else if (type == "Brass") {
        return make_shared<Brass>(name, cost);
    } else if (type == "Woodwind") {
        return make_shared<Woodwind>(name, cost);
    } else if (type == "Stringed") {
        return make_shared<Stringed>(name, cost);
    } else {
        return nullptr; //make's it valid or not
    }
}


//Main
int main() {
    double initialBudget;
    cout << "initial budge: ";
    cin >> initialBudget;

    BudgetBalance bandBudget(initialBudget);

    string instrumentType, instrumentName;
    double instrumentCost;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        // Add Instrument
        if (choice == 1) {
            cout << "instrument type (Percussion/Brass/Woodwind/Stringed):\n TIP: spell it exactly the same";
            cin >> instrumentType;
            cout << "instrument name: ";
            cin >> instrumentName;
            cout << "instrument cost: ";
            cin >> instrumentCost;

            auto instrument = createInstrument(instrumentType, instrumentName, instrumentCost);
            if (instrument) {
                //bandBudget.addInstrument(instrument);
                cout << "added" << endl;
            } else {
                cout << "error: invalid" << endl;
            }

        // delete instrument
        } else if (choice == 2) {
            cout << "instrument name to remove: ";
            cin >> instrumentName;
            //bandBudget.removeInstrument(instrumentName);
            cout << "deleted" << endl;

        //budget check
        } else if (choice == 3) {
            bandBudget.displayBudget();

        //quit
        } else if (choice == 4) {
            break;


        } else {
            cout << "try again" << endl;
        }
    }

    return 0;
}
