#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

//animal class:
    Animal::Animal(){
        name = "";
        age = 18;
        isHungry = false;
    }
    Animal::Animal(string name,int age,  bool isHungry ){
        this -> name = name;
        this -> age = age;
        this -> isHungry = isHungry;
    }


    Animal::~Animal(){

    }

    void Animal::setName(string name){
        this -> name = name;
    }
    string Animal::getName(){
        return name;
    }
    void Animal::setAge (int age);{
        this -> age = age;
    }
    int Animal::getAge(){
        return age;
    }
    void Animal::setHungry (bool isHungry){
        this -> isHungry = isHungry;
    }
    bool Animal::getHungry(){
        return isHungry;
    }

   virtual void Animal::display(){
        cout<<"name: "<<name<<" age: "<<age<<" hungry: "<<isHungry<<endl;
   }
   virtual void Animal::feed(){
        if (isHungry==true)
            return cout<<"feed me"<<endl;

        return cout<<"im full"<<endl;
   }

////////////////////////////////////////////////////////////

//mammal :
    Mammal::Mammal(){
        furColor = "blue";
    }
    Mammal::Mammal(string name,int age,  bool isHungry, string furColor){
        this-> furColor = furColor;
    }

    Mammal::~Mammal(){
    }

    void Mammal::setFurColor(string furColor){
        this-> furColor = furColor;
    }
    string Mammal::getFurColor(){
        return furColor;
    }


///////////////////////////////////////////////////////////

//bird:
    Bird::Bird(){
        wingSpan = 1.0;
    }

    Bird::Bird(string name,int age,  bool isHungry, float wingSpan){
        this -> wingSpan = wingSpan;
    }

    Bird::~Bird(){
    }

    void Bird::setWingSpan(float wingSpan){
        this -> wingSpan = wingSpan;
    }
    float Bird::getWingSpan(){
        return wingSpan;
    }

///////////////////////////////////////////////////////////

//Reptile:
    Reptile::Reptile(){
        isVenomous = false;
    }
    Reptile::Reptile(string name,int age,  bool isHungry, bool isVenomous){
        this -> isVenomous = isVenomous;
    }

    virtual Reptile::~Reptile(){
    }

    void Reptile::setVenomous(bool isVenomous){
        this -> isVenomous = isVenomous;
    }
    bool Reptile::getVenomous(){
        return isVenomous;
    }

///////////////////////////////////////////////////////////

//Enclosure:
    Enclosure::Enclosure(){
        animal = new Animal ("N" , 15 , false);
        capacity=0;
        currentCount = 0;
    }
    Enclosure::Enclosure(Animal* animal ,int capacity, int currentCount ){
        this -> animal = animal;
        this ->capacity = capacity;
        this ->currentCount = currentCount;

    }

    virtual Enclosure::~Enclosure(){
    }

    void Enclosure::setAnimal(Animal* animal){
        this -> animal = animal;
    }
    Animal* Enclosure::getAnimal(){
        return animal;
    }
    void Enclosure::setCapacity(int capacity){
        this ->capacity = capacity;
    }
    int Enclosure::getCapacity(){
        return capacity;
    }
    void Enclosure::setCurrentCount(int currentCount){
        this ->currentCount = currentCount;
    }
    int Enclosure::getCurrentCount(){
        return currentCount;
    }


    void Enclosure::addAnimal(Animal &a){
        if (currentCount < capacity){
            animal[currentCount]= a;
            currentCount++;
        }
        else
            cout<<"no place"<<endl;

    }
    void Enclosure::dispalyAnimals(){
        cout<<"animal: "<<animal<<" count: "<<currentCount<<" capacity: "<<capacity<<endl;
    }


///////////////////////////////////////////////////////////

//visiotr:
    Visitor::Visitor(){
        visitorName = "";
        ticketsBought = 0;
    }
    Visitor::Visitor(string visitorName,int ticketsBought ){
        this ->visitorName = visitorName;
        this ->ticketsBought = ticketsBought;
    }

    virtual Visitor::~Visitor(){
    }

    void Visitor::setVisitorName(string visitorName){
        this ->visitorName = visitorName;
    }
    string Visitor::getvisitorName(){
        return visitorName;
    }
    void Visitor::setTicketsBought( int ticketsBought){
        this ->ticketsBought = ticketsBought;
    }
    int Visitor::getTicketsBought(){
        return ticketsBought;
    }

    void Visitor::displayInfo(){
        cout<<"name: "<<visitorName<<" tickets: "<<ticketsBought<<endl;
    }

///////////////////////////////////////////////////////////
// ============== MAIN FUNCTION ==============
int main() {
    
    
    return 0;
}
