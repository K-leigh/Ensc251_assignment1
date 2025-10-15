//main.cpp,  
//you can manipulate your class objects here
#include <iostream> //cin and cout
#include "week.hpp"
#include "slotRange.hpp"
using namespace std;

int main(){
  using std::cout;
    using std::cin;
    using std::endl;

    // 1. Test default constructors
    Week w1;                 // defaults to week 1, all slots free
    SlotRange s1;            // defaults to 0–0
    cout << "Testing default Week and SlotRange objects:\n";
    w1.output(cout);
    s1.printSlotRange(cout);
    cout << endl;

    // 2. Test parameterized Week constructor
    Week w2(24);             // week 24 (a peak week in your array)
    cout << "Testing Week(24):\n";
    w2.output(cout);
    cout << endl;

    // 3. Set some slots reserved
    cout << "Reserving a few slots in Week 24...\n";
    w2.setReserved(5, true);
    w2.setReserved(6, true);

    w2.printReservedSlots(cout);
    w2.printFreeSlots(cout);
    cout << endl;

    //  4. Test SlotRange setters and validation ----
    SlotRange s2;
    s2.setBeginSlot(4);
    s2.setEndSlot(5);
    cout << "Testing SlotRange 4-5:\n";
    s2.printSlotRange(cout);
    cout << "Is valid? " << (s2.isValid() ? "Yes" : "No") << endl << endl;

    // Invalid example: not a multiple of 2
    SlotRange s3;
    s3.setBeginSlot(3);
    s3.setEndSlot(4);
    cout << "Testing SlotRange 3-4:\n";
    s3.printSlotRange(cout);
    cout << "Is valid? " << (s3.isValid() ? "Yes" : "No") << endl << endl;

    // 5. User input test
    int weekNum;
    cout << "Enter a week number to test (1-52): ";
    cin >> weekNum;

    Week wUser(weekNum);
    if (wUser.isValid()) {
        wUser.output(cout);
    } else {
        cout << "Invalid week number.\n";
    }
    return 0;

}//end of assignment 1 
