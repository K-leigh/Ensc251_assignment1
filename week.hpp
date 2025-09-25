#ifndef WEEK_HPP
#define WEEK_HPP

#include <iostream>
using namespace std;


//header file week.hpp to declare your class
class Week {

    private:

    int week; 
    bool reserved[24];


    public:

    //constructor
    Week();
    Week(int w);
    //do I need a copy constructor????

    //getters and setters:
    //returns week number
    int getWeek(int w) const;
    void setWeek(int w);

    bool isMaintenance();
    bool isPeak();


    bool isValid();

    //outputs
    void output(ostream& outs) const;
    void printReservedSlots() const;
    void printFreeSlots() const;


    //equal
    friend bool equal(const Week &w1, const Week &w2);






  
};


#endif
