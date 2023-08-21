#include<iostream>
#include"Musician.h"


class Orchestra {
    public:
        int Orchestra_size;
        int current_size = 0;
        Musician* members;
    
        Orchestra();     
    
        Orchestra(int size);   // constructor for an orchestra of given size

        int get_current_number_of_members(); 
     
        bool has_instrument(std::string instrument); 

        Musician *get_members();        // returns the array of members of the orchestra

        bool add_musician(Musician new_musician);
        
        ~Orchestra();
};