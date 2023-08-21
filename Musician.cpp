#include "Musician.h"
#include<iostream>
#include<string>
using namespace std;
Musician::Musician() {
    instr = "null";
    exp = 0;
};

Musician::Musician(std::string instrument, int experience) {
    instr = instrument;
    exp = experience;
};

std::string Musician::get_instrument() {
    return instr;
};

int Musician::get_experience() {
    return exp;
};

