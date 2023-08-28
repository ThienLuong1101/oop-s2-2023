#include<iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include<string>
using namespace std;

class Vehicle {
    private:
        time_t timeOfEntry = time(nullptr);
        int ID;
    public:
    Vehicle(){};
    Vehicle( int id) : ID(id) {}
    time_t getTime() {return timeOfEntry;}
    int getID() {return ID;}
    virtual int getParkingDuration() = 0;
    ~Vehicle() {};
};

class Car : public Vehicle {
    public:
    Car(int id) : Vehicle(id) {}
    int getParkingDuration(){ 
        
        time_t currTime = time(nullptr);
        int elapsedTime = static_cast<int>(currTime - getTime());
        std::this_thread::sleep_for(std::chrono::milliseconds(1000 - 900));
        return elapsedTime; 
    
    }
    
};

class Bus : public Vehicle {
    public:
    Bus(int id) : Vehicle(id) {}
    int getParkingDuration() {
    
        time_t currTime = time(nullptr);
        int elapsedTime = static_cast<int>(currTime - getTime());
        std::this_thread::sleep_for(std::chrono::milliseconds(1000 - 750));
        return elapsedTime; 
    }
};

class Motobike : public Vehicle {
    public:
    Motobike(int id) : Vehicle(id){}
    int getParkingDuration() {
        
        time_t currTime = time(nullptr);
        int elapsedTime = static_cast<int>(currTime - getTime());
        std::this_thread::sleep_for(std::chrono::milliseconds(1000 - 850));
        return elapsedTime; 
        
    }
};

class ParkingLot {
    private:
        int max;
        int curr = 0;
    public:
        ParkingLot(int cap) : max(cap) {}
        Vehicle** park = new Vehicle*[max];
        int getCount() {return curr;}
        void parkVehiecle(Vehicle* a) {
            if (curr < max)
            {
                park[curr] = a;
                curr++;
            }
            else
            {
                cout << "The lot is full" << endl;
            }  
        } 
        void unparkVehiecle(int id) {
            int found = 0;
            for (int i = 0; i < max; i++)
            {
                if (park[i]->getID() == id)
                {
                    delete park[i];
                    found++;
                    park[i] = nullptr;
                }
            }
            if (!found)
            {
                cout<<"Vehicle not in the lot" << endl;
            }
            
            
        } 

};
int main() {
    int c, b, m;
    Vehicle* ParkingLot[10];
    string type;
      
    for (int i = 0; i < 10; i++)
    {
        cout<< "What type of vehicle parking here (car,bus,motobike): ";
        cin >> type;
        if (type == "car")
        {
            ParkingLot[i] = new Car(i);
            ParkVehicle
        }
        else if (type == "bus")
        {
            ParkingLot[i] = new Bus(i);
        }
        else if (type == "motobike")
        {
            ParkingLot[i] = new Motobike(i);
        }
    }
    




    return 0;
}