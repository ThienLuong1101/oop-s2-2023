#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

extern Person* createPersonArray(int n);

int main() {
    Person* ans;
    int n;
    cout << "enter a number: ";
    cin >> n;
    ans = createPersonArray(n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i].name << ans[i].age << endl;
    }
    delete[] ans;
    return 0;
}