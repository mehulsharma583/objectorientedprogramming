#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

// Function declarations
PersonList createPersonList(int n);
PersonList deepCopyPersonList(const PersonList& original);
PersonList shallowCopyPersonList(const PersonList& original);
void printPersonList(const PersonList& list);

#endif // PERSON_H
