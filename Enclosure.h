#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 
class Enclosure {
private:
    Animal* animal;
    int capacity;
    int currentCount;

public:
    Enclosure();
    Enclosure(Animal* animal ,int capacity, int currentCount );

    virtual ~Enclosure();

    void setAnimal(Animal* animal);
    Animal* getAnimal();
    void setCapacity(int capacity);
    int getCapacity();
    void setCurrentCount(int currentCount);
    int getCurrentCount();


    void addAnimal(Animal &a);
    void dispalyAnimals();

};







#endif
