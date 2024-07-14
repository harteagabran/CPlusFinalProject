#ifndef GUITAR_H
#define GUITAR_H
#include<string>
#include <memory>
class Guitar
{
public:

    Guitar(std::string selection, double cost);



    void guitarSelection();

    void displayGuitars();
private:
    std::string name;
    double guitarCost;

};

#endif // GUITAR_H
