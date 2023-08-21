#include "Musician.h"
#include"Orchestra.h"
#include<vector>
#include<list>
#include<iostream>
Orchestra::Orchestra() {
    Orchestra_size = 0;
}

Orchestra::Orchestra(int size) {
    Orchestra_size = size;
    members = new Musician[size];
};

int Orchestra::get_current_number_of_members() {
    
    return current_size;
}; 

bool Orchestra::has_instrument(std::string instrument){
    for(int i = 0; i < Orchestra_size; i++) {
        if(members[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
};

Musician* Orchestra::get_members() {
    return members;
}


bool Orchestra::add_musician(Musician new_musician) {
    if (get_current_number_of_members() < Orchestra_size)
    {
        
        members[get_current_number_of_members()] = new_musician;
        current_size++;
        return true;
    }
    return false;
}

Orchestra::~Orchestra() {
    delete [] members;
};