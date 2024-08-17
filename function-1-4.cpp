#include "Person.h"

PersonList shallowCopyPersonList(const PersonList& original) {
    PersonList copy;
    copy.numPeople = original.numPeople;
    copy.people = original.people;  // Shallow copy: share the same array
    return copy;
}
