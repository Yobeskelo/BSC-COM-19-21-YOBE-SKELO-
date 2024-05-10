#include "person.h"

Person::Person() {
    // Default constructor
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(float newWeight) {
    // Constructor with weight parameter
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}

Person::~Person() {
    // Destructor
    // Clean-up code if any
}

float Person::operator+(const Person& otherPerson) {
    // Overload the add operator
    return mWeight + otherPerson.mWeight;
    
}
