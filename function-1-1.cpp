#include "Person.h"

Person* createPersonArray(int size) {
    Person* array = new Person[size];
    for (int i = 0; i < size; ++i) {
        array[i].name = "John Doe"; // Set default name to "John Doe"
        array[i].age = 0; // Set default age to 0
    }
    return array;
}
