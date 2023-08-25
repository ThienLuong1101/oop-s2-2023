#include<iostream>
#include<string>
#include"Bike.h"

using namespace std;

class Bike_yard
{
public:
    int Capacity;
    int curr = 0;
    Bike* yard;
    Bike_yard();            // default constructor for yard with zero capacity
    Bike_yard(int capacity);   // constructor for yard that can hold "capacity" bikes

    int get_Total_Stock_Count(); // count of the current number of bikes in yard
    int get_Stock_Quantity(int code);  // count of the number of bikes with brand code equal to "code"
    Bike *get_Current_Stock_List(); // gets an array containing all the bikes in the yard

    bool add_Stock(Bike b); // tries to add a bike to yard. If there is enough space, return true
                        // and adds bike to the yard. Otherwise, do not save bike, and return false. 
    ~Bike_yard();            // destructor
};

