#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>
using namespace std;

class Musician {
private:
    string instr;
    int exp;    
    int curr;
public:
    Musician();
    Musician(std::string instrument, int experience);
    std::string get_instrument();
    int get_experience();
};

#endif
