#include <iostream>
#include <memory>
#include <string>
#include "budgetbalance.h"
#include "Drumset.h"
#include "bass.h"
#include "guitar.h"
#include "keyboard.h"


using namespace std;

class Instrument {
private:
    string* type;
    string* name;
    double cost;
public:
    Instrument(string* type, string* name, double cost):
        type(type), name(name), cost(cost){}
};

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
    if (type == "Drumset") {
        return make_shared<Drumset>(name, cost);
    } else if (type == "Bass") {
        return make_shared<Bass>(name, cost);
    } else if (type == "Guitar") {
        return make_shared<Guitar>(name, cost);
    } else if (type == "Keyboard") {
        return make_shared<Keyboard>(name, cost);
    } else {
        return nullptr; //make's it valid or not
    }
}


//Main
int main() {
    double initialBudget;
    cout << "initial budget: ";
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
