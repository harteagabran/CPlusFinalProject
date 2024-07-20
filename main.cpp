#include <iostream>
#include <memory>
#include <string>
#include "budgetbalance.h"
#include <map>
#include <cstdlib>
#include <ctime>
//#include "Drumset.h"
//#include "bass.h"
//#include "guitar.h"
//#include "keyboard.h"


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


class Instrument {
private:
public:

    virtual void printSelection(map<string, double> selectedItems) = 0;

    virtual void removeSelection(map<string,double> selectedItems) = 0;

    virtual void displayMap() = 0;


    virtual double returnCost() = 0;

    static Instrument* createInstrument();
};
class Drumset : public Instrument {
private:
    string name;
    double drumCost;
public:
    // Zach- added contollers to each class to get input for betting and for the players selected number
    Drumset(string name, int drumCost):
        name(name), drumCost(drumCost) { }

   void printSelection(map<string, double> selectedItems) {
        map<string, double>drumsets;

        drumsets["Backbeat-Elite"] = 799;
        drumsets["Dominion-Birch"] = 799;
        drumsets["Centenial-Zep"] = 1299;
        drumsets["RGD0520"] = 799;
        if (drumsets.count(name) > 0) {
            cout << "You have selected " << name << " which costs $" << drumCost << endl;
            selectedItems[name] = drumCost;
        }
        else {
            cout << name << " is not an available option please try again." << endl;
            drumCost = 0;
        }
    }
   void removeSelection(map<string, double> selectedItems) {
       if (selectedItems.count(name) > 0) {
           cout << " You have removed" << name << " from the budget." << endl;
           selectedItems.erase(name);
       } else {
           cout << name << " not found." << endl;
           drumCost = 0;
       }
   }



   void displayMap() {
       map<string, double>drumsets;

       drumsets["Backbeat-Elite"] = 799;
       drumsets["Dominion-Birch"] = 799;
       drumsets["Centenial-Zep"] = 1299;
       drumsets["RGD0520"] = 799;

       map<string, double>::iterator it = drumsets.begin();

       while (it != drumsets.end()) {
           cout << "Drumset Name: " << it->first
                     << ", Cost: $" << it->second << endl;
           ++it;
       }
   }

       double returnCost(){

           return drumCost;
       }


};
// Zach - added if statements to differentiate whether the number was black or not
class Bass : public Instrument {
private:
    string name;
    double bassCost;
public:

    Bass(string name, int bassCost):
        name(name), bassCost(bassCost) { }

    void printSelection(map<string, double> selectedItems) {

        map<string, double>basses;
        basses["Jazz"] = 799;
        basses["Precision"] = 799;
        basses["Vibe"] = 469;
        basses["StingRay5"] = 2699;

        if (basses.count(name) > 0) {
            cout << "You have selected " << name << " which costs $" << bassCost << endl;
            selectedItems[name] = bassCost;
        }
        else {
            cout << name << " is not an available option please try again." << endl;
            bassCost = 0;
        }
    }

    void removeSelection(map<string, double> selectedItems) {
        if (selectedItems.count(name) > 0) {
            cout << " You have removed" << name << " from the budget." << endl;
            selectedItems.erase(name);
        } else {
            cout << name << " not found." << endl;
            bassCost = 0;
        }
    }



    void displayMap() {
        map<string, double>basses;
        basses["Jazz"] = 799;
        basses["Precision"] = 799;
        basses["Vibe"] = 469;
        basses["StingRay5"] = 2699;

        std::map<string, double>::iterator it = basses.begin();

        while (it != basses.end()) {
            cout << "Bass Name: " << it->first
                      << ", Cost: $" << it->second << endl;
            ++it;
        }

    }

    double returnCost(){
        return bassCost;
    }

};
// Zach - added if statements to differentiate whether the number was green or not
class Guitar : public Instrument {
private:
    string name;
    double guitarCost;

public:

    Guitar(string name, int guitarCost):
        name(name), guitarCost(guitarCost) { }

    void printSelection(map<string, double> selectedItems) {
        map<string, double>guitars;

        guitars["Stratocaster"] = 799;
        guitars["Telecaster"] = 799;
        guitars["SA-126"] = 1799;
        guitars["G5427T"] = 899;

        if (guitars.count(name) > 0) {
            cout << "You have selected " << name << " which costs $" << guitarCost << endl;
            selectedItems[name] = guitarCost;
        }
        else {
            cout << name << " is not an available option please try again." << endl;
            guitarCost = 0;
        }
    }

    void removeSelection(map<string, double> selectedItems) {
        if (selectedItems.count(name) > 0) {
            cout << " You have removed " << name << " from the budget." << endl;
            selectedItems.erase(name);
        } else {
            cout << name << " not found." << endl;
            guitarCost = 0;
        }
    }



    void displayMap() {
        map<string, double>guitars;

        guitars["Stratocaster"] = 799;
        guitars["Telecaster"] = 799;
        guitars["SA-126"] = 1799;
        guitars["G5427T"] = 899;

        map<string, double>::iterator it = guitars.begin();

        while (it != guitars.end()) {
            cout << "Guitar Name: " << it->first
                      << ", Cost: $" << it->second << endl;
            ++it;
        }

    }

    double returnCost(){
        return guitarCost;
    }

};
// Zach - removed the if statements for colors because they were not necessary if the player chose to bet on a number
class Keyboard : public Instrument {
private:
    string name;
    double keyboardCost;

public:

    Keyboard(string name, int keyboardCost):
        name(name), keyboardCost(keyboardCost) { }

    void printSelection(map<string, double> selectedItems) {
        map<string, double>keyboards;

        keyboards["PSR-E473"] = 369 ;
        keyboards["PSR-SX600"] = 1099;
        keyboards["PSR-SX700"] = 1599;
        keyboards["PSR-SX900"] = 2299;
        if (keyboards.count(name) > 0) {
            cout << "You have selected " << name << " which costs $" << keyboardCost << endl;
            selectedItems[name] = keyboardCost;
        }
        else {
            cout << name << " is not an available option please try again." << endl;
            keyboardCost = 0;
        }

    }

    void removeSelection(map<string, double> selectedItems) {
        if (selectedItems.count(name) > 0) {
            cout << " You have removed" << name << " from the budget." << endl;
            selectedItems.erase(name);
        } else {
            cout << name << " not found." << endl;
            keyboardCost = 0;
        }
    }


    void displayMap() {
        map<string, double>keyboards;

        keyboards["PSR-E473"] = 369 ;
        keyboards["PSR-SX600"] = 1099;
        keyboards["PSR-SX700"] = 1599;
        keyboards["PSR-SX900"] = 2299;

        map<string, double>::iterator it = keyboards.begin();

        while (it != keyboards.end()) {
            cout << "Keyboard Name: " << it->first
                      << ", Cost: $" << it->second << endl;
            ++it;
        }

    }

    double returnCost() {
        return keyboardCost;
    }

};

Instrument* Instrument::createInstrument() {



    string instrumentType, instrumentName;
    double instrumentCost;


            cout << "instrument type (Drumset/Bass/Guitar/keyboard):\n TIP: spell it exactly the same";
            cin >> instrumentType;


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

        }

//MENU


//not sure what exactly do they want for their band so i just classified them by type
//OBJECT making instruments
//shared_ptr<Instrument> createInstrument(const string& type, const string& name, double cost) {
    //if (type == "Drumset") {
        //return make_shared<Drumset>(name, cost);
    //} else if (type == "Bass") {
       // return make_shared<Bass>(name, cost);
    //} else if (type == "Guitar") {
        //return make_shared<Guitar>(name, cost);
    //} else if (type == "Keyboard") {
       // return make_shared<Keyboard>(name, cost);
    //} else {
       // return nullptr; //make's it valid or not
    //}
//}


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
