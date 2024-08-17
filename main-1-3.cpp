#include <iostream>
#include "Person.h"
#include "function-1-2.cpp"
#include "function-1-3.cpp"

using namespace std;

void printPersonList(const PersonList& list) {
    for (int i = 0; i < list.numPeople; ++i) {
        cout << "Person " << (i + 1) << ": " << list.people[i].name << ", Age: " << list.people[i].age << endl;
    }
}
int main() {
    const int numberOfPersons = 5;

    PersonList originalList = createPersonList(numberOfPersons);
    cout << "Original list of persons:" << endl;
    printPersonList(originalList);

    PersonList copiedList = deepCopyPersonList(originalList);
    cout << "Copied list:" << endl;
    printPersonList(copiedList);

    delete[] originalList.people;
    delete[] copiedList.people;
    originalList.people = nullptr;
    copiedList.people = nullptr;

    return 0;
}