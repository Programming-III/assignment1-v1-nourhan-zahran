#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 

class Animal
{
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal();
    Animal(string name,int age,  bool isHungry );

    virtual ~Animal();

    void setName(string name);
    string getName();
    void setAge (int age);
    int getAge();
    void setHungry (bool isHungry);
    bool getHungry();

   virtual void display();
   virtual void feed();
};

#endif
