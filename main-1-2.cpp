#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

extern PersonList createPersonList(int n);

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;
    PersonList ans = createPersonList(n);
    for (int i = 0; i < n; i++)
    {
        cout << ans.people[i].name << " " << ans.people[i].age << endl;
    }

    return 0;
}