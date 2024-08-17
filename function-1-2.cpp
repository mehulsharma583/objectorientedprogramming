#ifndef PERSON_H
#define PERSON_H

#include "Person.h"

using namespace std;

PersonList createPersonList(int n) {
    PersonList personList;
    personList.numPeople = n;
    personList.people = new Person[n];

    for (int i = 0; i < n; ++i) {
        personList.people[i].name = "James donson";
        personList.people[i].age = 1;
    }

    return personList;
}

#endif // FUNCTION_1_2_H