#ifndef PERSON_H
#define PERSON_H

#include<string>

using namespace std;

struct Person {
    string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif //PERSON_H