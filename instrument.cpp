//Halmar - I decided to change the menus to use numbers rather than require to input name directly
//  think this makes it easier to navigate, left the old code commented out for grading purposes
#include "instrument.h"
#include "drumset.h"
#include "bass.h"
#include "guitar.h"
#include "keyboard.h"

Instrument* Instrument::createInstrument() {
    int instrumentType;
    string instrumentName;
    double instrumentCost;

    /*
    cout << "instrument type (Drumset/Bass/Guitar/keyboard):\n TIP: spell it exactly the same";
    cin >> instrumentType;
    */

    cout << "Select Instrument type:\n";
    cout << "\t1. Drumset\n";
    cout << "\t2. Bass\n";
    cout << "\t3. Guitar\n";
    cout << "\t4. Keyboard\n";
    cout << "Enter the number for instrument type: ";
    cin >> instrumentType;

    /*
        if (instrumentType == "Drumset") {
                Drumset* drumset = new Drumset("", 0);
                drumset->displayMap();
                cout << "instrument name: ";
                cin >> instrumentName;
                cout << "instrument cost: ";
                cin >> instrumentCost;
                return new Drumset(instrumentName, instrumentCost);
               //bandBudget.addInstrument(instrument);
                cout << "added" << endl;
            }
            else if (instrumentType == "Bass") {
                Bass* bass = new Bass("", 0);
                bass->displayMap();
                cout << "instrument name: ";
                cin >> instrumentName;
                cout << "instrument cost: ";
                cin >> instrumentCost;
                return new Bass(instrumentName, instrumentCost);
                //bandBudget.addInstrument(instrument);
                cout << "added" << endl;
            }
            else if (instrumentType == "Guitar") {
                Guitar* guitar = new Guitar("", 0);
                guitar->displayMap();
                cout << "instrument name: ";
                cin >> instrumentName;
                cout << "instrument cost: ";
                cin >> instrumentCost;
                return new Guitar(instrumentName, instrumentCost);
                //bandBudget.addInstrument(instrument);
                cout << "added" << endl;
            }
            else if (instrumentType == "Keyboard") {
                Keyboard* keyboard = new Keyboard("", 0);
                keyboard->displayMap();
                cout << "instrument name: ";
                cin >> instrumentName;
                cout << "instrument cost: ";
                cin >> instrumentCost;
                return new Keyboard(instrumentName, instrumentCost);
                //bandBudget.addInstrument(instrument);
                cout << "added" << endl;
            }
            else {
                cout << "error: invalid" << endl;
            }
    */

    switch (instrumentType) {
    case 1: {
        Drumset* drumset = new Drumset("", 0);
        drumset->displayMap();
        cout << "instrument name: ";
        cin >> instrumentName;
        cout << "instrument cost: ";
        cin >> instrumentCost;
        return new Drumset(instrumentName, instrumentCost);
        //bandBudget.addInstrument(instrument);
        cout << "added" << endl;
    }
    case 2: {
        Bass* bass = new Bass("", 0);
        bass->displayMap();
        cout << "Instrument name: ";
        cin >> instrumentName;
        cout << "Instrument cost: ";
        cin >> instrumentCost;
        return new Bass(instrumentName, instrumentCost);
    }
    case 3: {
        Guitar* guitar = new Guitar("", 0);
        guitar->displayMap();
        cout << "Instrument name: ";
        cin >> instrumentName;
        cout << "Instrument cost: ";
        cin >> instrumentCost;
        return new Guitar(instrumentName, instrumentCost);
    }
    case 4: {
        Keyboard* keyboard = new Keyboard("", 0);
        keyboard->displayMap();
        cout << "Instrument name: ";
        cin >> instrumentName;
        cout << "Instrument cost: ";
        cin >> instrumentCost;
        return new Keyboard(instrumentName, instrumentCost);
    }
    default:
        cout << "Error: Invalid selection" << endl;
        return nullptr;
    }

}
