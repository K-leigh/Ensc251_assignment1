//week.cpp to implement your class
#include "week.hpp"
#include <iostream>
#include <array>

using namespace std;



    Week::Week(int w){

    };
    //do I need a copy constructor????

    
    int Week::getWeek(int w) const {
        return week;
    };

    

    void Week::setWeek(int w) {

        

    };

    bool Week::isMaintenance(){

    };
    bool Week::isPeak(){


    };


    bool Week::isValid(){

        if( week<1 || week>52 ){

            return false;
        }
        else { 

            return true;
        }
    };

    //outputs
    void Week::output(ostream& outs) const{

    };
    void printReservedSlots() const;
    void printFreeSlots() const;
