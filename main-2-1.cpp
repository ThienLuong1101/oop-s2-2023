#include<iostream>
using namespace std;

extern int *readNumbers();
extern void hexDigits(int *numbers,int length);
int main() {
    hexDigits(readNumbers(),10);
    return 0;
}