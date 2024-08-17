#include <iostream>
#include "Person.h"
#include "function-1-2.cpp"

using namespace std;

void printPersonList(const PersonList& personList) {
    for (int i = 0; i < personList.numPeople; ++i) {
        cout << "Person " << (i + 1) << ": " << personList.people[i].name << ", Age: " << personList.people[i].age << endl;
    }
}

int main() {
    int numberOfPersons = 5;  // Example value for testing
    PersonList personList = createPersonList(numberOfPersons);

    cout << "List of persons:" << endl;
    printPersonList(personList);

    delete[] personList.people; // Free the allocated memory
    personList.people = nullptr; // Set pointer to nullptr for safety

    return 0;
}


