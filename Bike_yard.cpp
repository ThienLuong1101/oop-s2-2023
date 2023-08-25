#include"Bike_yard.h"

Bike_yard::Bike_yard() {
    Capacity = 0;
};            // default constructor for yard with zero capacity
Bike_yard::Bike_yard(int capacity) {
    Capacity = capacity;
    yard = new Bike[Capacity];
};   // constructor for yard that can hold "capacity" bikes

int Bike_yard::get_Total_Stock_Count() {
    return curr;
}; // count of the current number of bikes in yard
int Bike_yard::get_Stock_Quantity(int code) {
    int count = 0;
    for (int i = 0; i < Capacity; i++)
    {
        if (yard[i].code_num == code)
        {
            count++;
        }
    }
    return count;
};  // count of the number of bikes with brand code equal to "code"
Bike* Bike_yard::get_Current_Stock_List() {
    return yard;
}; // gets an array containing all the bikes in the yard

bool Bike_yard::add_Stock(Bike b){
    if (get_Total_Stock_Count() < Capacity)
    {
        yard[curr] = b;
        curr++;
        return true;
        
    }
    else{return false;}
}; // tries to add a bike to yard. If there is enough space, return true
                     // and adds bike to the yard. Otherwise, do not save bike, and return false. 
Bike_yard::~Bike_yard() {
    delete [] yard;
};            // destructor