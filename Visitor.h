#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class Visitor
{
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor();
    Visitor(string visitorName,int ticketsBought );

    virtual ~Visitor();

    void setVisitorName(string visitorName);
    string getvisitorName();
    void setTicketsBought( int ticketsBought);
    int getTicketsBought();

    void displayInfo();
};







#endif
