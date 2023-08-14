#include<iostream>
#include"Person.h"

PersonList createPersonList(int n){
    PersonList a;
    a.numPeople = n;
    a.people = new Person[n];

    for (int i = 0; i < a.numPeople; i++)
    {
        a.people[i].name = "Jane Doe";
        a.people[i].age = 1;
    }
    
    return a;
}

PersonList deepCopyPersonList(PersonList pl){
    PersonList a;
    a.numPeople = pl.numPeople;
    a.people = new Person[a.numPeople];

    for (int i = 0; i < a.numPeople; i++)
    {
        a.people[i].name = pl.people[i].name;
        a.people[i].age = pl.people[i].age;
    }
    
    return a;
}

PersonList shallowCopyPersonList(PersonList pl){
    PersonList a;
    a.numPeople = pl.numPeople;
    a.people = pl.people;
    return a;
}