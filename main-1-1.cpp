#include"Bike.h"
#include<iostream>

int main() {
    Bike b("AN",2004);
    cout << b.getBrand() << endl;
    cout << b.getCode() << endl;
    return 0;
}