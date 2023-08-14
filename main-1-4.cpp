#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

extern PersonList createPersonList(int n);
extern  PersonList deepCopyPersonList(PersonList pl);
extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;
    PersonList ans = createPersonList(n);
    PersonList res = deepCopyPersonList(ans);
    PersonList shallow = shallowCopyPersonList(res);
    for (int i = 0; i < n; i++)
    {
        cout << shallow.people << " " << shallow.people[i].age << endl;
    }

    return 0;
}