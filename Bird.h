#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 
class Bird : public Animal
{
private:
    float wingSpan;

public:
    Bird();
    Bird(string name,int age,  bool isHungry, float wingSpan);

    virtual ~Bird();

    void setWingSpan(float wingSpan);
    float getWingSpan();
};






#endif
