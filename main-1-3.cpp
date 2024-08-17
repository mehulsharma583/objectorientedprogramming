#include <iostream>
#include "Person.h"

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
    cout << "\nCopied list:" << endl;
    printPersonList(copiedList);

    delete[] originalList.people;
    delete[] copiedList.people;

    return 0;
}
