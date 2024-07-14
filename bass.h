#ifndef BASS_H
#define BASS_H
#include<string>
#include <memory>
class Bass
{
public:

    Bass(std::string selection, double cost);



    void bassSelection();

    void displayBasses();
private:
    std::string name;
    double bassCost;

};
#endif // BASS_H
