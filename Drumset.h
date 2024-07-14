#ifndef DRUMSET_H
#define DRUMSET_H
#include<string>
#include <memory>
class Drumset
{
public:

    Drumset(std::string selection, double cost);



    void drumSelection();

    void displayDrumsets();
private:
    std::string name;
    double drumCost;

};

#endif // DRUMSET_H
