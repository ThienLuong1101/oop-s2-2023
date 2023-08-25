#include"Bike.h"

Bike::Bike() {
    int code_num = 0;
    string Brand = " ";
};            // default constructor - makes new bike with code number 0 and
                  // and empty string "" for brand

Bike::Bike(std::string brand, int code) {
    Brand = brand;
    code_num = code;
};  // constructor taking string representing brand
                                    // and integer representing code for that brand

string Bike :: getBrand() {return Brand;}        // returns the brand of the bike
int Bike :: getCode() {return code_num;}                     // returns the brand code number of bike
Bike::~Bike(){ };                            // destructor