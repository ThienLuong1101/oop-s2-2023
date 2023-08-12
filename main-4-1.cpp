#include <iostream>
using namespace std;
extern int secondSmallestSum(int *numbers,int length);
int main() {
    int array[4] = {1,2,3,4};
    cout << secondSmallestSum(array,4) << endl;
    return 0;
}