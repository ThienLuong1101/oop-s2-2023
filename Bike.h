#include<iostream>
#include<string>
using namespace std;
class Bike
{
    public:
        int code_num;
        string Brand;
        Bike();         

        Bike(std::string brand, int code);  // constructor taking string representing brand
                                            // and integer representing code for that brand

        std::string getBrand();            // returns the brand of the bike
        int getCode();                     // returns the brand code number of bike
        ~Bike();                            // destructor
};

