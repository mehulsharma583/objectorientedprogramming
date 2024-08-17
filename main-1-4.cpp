#include <iostream>
#include "Person.h"
#include "function-1-2.cpp"  // To access createPersonList function
#include "function-1-4.cpp"  // To access shallowCopyPersonList function

using namespace std;

void printPersonList(const PersonList& list) {
    for (int i = 0; i < list.numPeople; ++i) {
        cout << "Person " << (i + 1) << ": " << list.people[i].name << ", Age: " << list.people[i].age << endl;
    }
}

int main() {
    const int numberOfPersons = 5;

    // Create and print original list
    PersonList originalList = createPersonList(numberOfPersons);
    cout << "Original list of persons:" << endl;
    printPersonList(originalList);

    // Shallow copy and print copied list
    PersonList copiedList = shallowCopyPersonList(originalList);
    cout << "\nShallow copied list of persons:" << endl;
    printPersonList(copiedList);

    // Modify the original list
    originalList.people[0].name = "Modified Name";
    originalList.people[0].age = 99;

    cout << "\nAfter modifying the original list:" << endl;
    cout << "Original list:" << endl;
    printPersonList(originalList);

    cout << "Shallow copied list:" << endl;
    printPersonList(copiedList);

    // Clean up memory
    delete[] originalList.people;  // This will also affect copiedList since it's a shallow copy

    return 0;
}