#include "main1.h"
#include <iostream>

// Constructor
main1::main1() : value(0), name("") {
}

// Parameterized constructor
main1::main1(int v, const std::string& n) : value(v), name(n) {
}

// Destructor
main1::~main1() {
}

// Member function implementations
void main1::setValue(int v) {
    value = v;
}

int main1::getValue() const {
    return value;
}

void main1::display() const {
    std::cout << "Value: " << value << ", Name: " << name << std::endl;
}

int main() {
    main1 object1;
    object1.display();
    return 0;
}