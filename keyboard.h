#ifndef KEYBOARD_H
#define KEYBOARD_H
#include <string>
#include <memory>
class Keyboard
{
public:

    Keyboard(std::string selection, double cost);



    void keyboardSelection();

    void displayKeyboards();
private:
    std::string name;
    double keyboardCost;

};

#endif // KEYBOARD_H
