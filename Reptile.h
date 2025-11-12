#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here
class Reptile : public Animal
{
private:
    bool isVenomous;

public:
    Reptile();
    Reptile(string name,int age,  bool isHungry, bool isVenomous);

    virtual ~Reptile();

    void setVenomous(bool isVenomous);
    bool getVenomous();
};








#endif
