#include "Person.h"

PersonList deepCopyPersonList(const PersonList& original) {
    PersonList copy;
    copy.numPeople = original.numPeople;
    copy.people = new Person[copy.numPeople];

    for (int i = 0; i < copy.numPeople; ++i) {
        copy.people[i].name = original.people[i].name;
        copy.people[i].age = original.people[i].age;
    }

    return copy;
}