#include <iostream>
using namespace std;

int *readNumbers() {
    int* array = new int[10];
    for (int i = 0; i < 10; i++)
    {
        std::cin >> array[i];
    }

    return array;  
};

void printNumbers(int *numbers,int length) {
    for (int i = 0; i <length; i++)
    {
        cout << i << " " << numbers[i] << endl;
    }
};

int *reverseArray(int *numbers1,int length) {
    int *rever = new int[length];
    int index = length - 1;
    for (int i = 0; i < length; i++)
    {
        rever[i] = numbers1[index];
        index--;
    }
    return rever;
};

bool equalsArray(int *numbers1,int *numbers2,int length) {
    if (length < 1)
    {
        return false;
    }
    
    for (int i = 0; i < length; i++)
    {
        if (numbers1[i] != numbers2[i])
        {
            return false;
        }   
    }
    return true;
} ;