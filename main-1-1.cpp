#include <iostream>
#include "Person.h"

using namespace std;

int main() {
    int n = 8;
    Person* persons = createPersonArray(n);

    for (int i = 0; i < n; ++i) {
        int sum = i + 1;
        cout << "Person " << sum << ": " << persons[i].name << ", Age: " << persons[i].age << endl;
    }

    delete[] persons;
    return 0;
}