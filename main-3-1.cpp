#include<iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;
int main() {
    cout << "Enter array 1: " << endl;
    int *num1 = readNumbers();
    cout << "Enter array 2:" << endl;
    int *num2 = readNumbers();
    int len = sizeof(num1) / sizeof(num1[0]);
    bool check = equalsArray(num1,num2,len);
    if (check)
    {
        cout << "same" << endl;
    }
    delete[] num1;
    delete[] num2;
    return 0;
}