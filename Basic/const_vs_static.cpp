#include "const_vs_static.h"
#include <iostream>

// Initialize static member variable
int const_vs_static::instanceCount = 0;

// Default constructor - Initializes value to 0 and name to empty string
const_vs_static::const_vs_static() : id(instanceCount++), value(0), name("") {
}

// Parameterized constructor - Initializes object with provided value and name
const_vs_static::const_vs_static(int v, const std::string &n) : value(v), name(n) {
}

// Destructor - Cleans up resources when object is destroyed
const_vs_static::~const_vs_static() {
    instanceCount--;
}

// Sets the integer value of the object
void const_vs_static::setValue(int v) {
    value = v;
}

// Returns the current integer value of the object
int const_vs_static::getValue() const {
    return value;
}

// Displays the current state of the object (value and name)
void const_vs_static::display() const {
    std::cout << "Value: " << value << ", Name: " << name << std::endl;
}

int const_vs_static::getInstanceCount() {
    return instanceCount;
}


using namespace std;

// Main function - Entry point of the program
int main() {
    // Example of regular object
    const_vs_static object1(42, "Regular");
    object1.display();
    object1.setValue(100); // OK - non-const object can modify state

    // Example of const object
    const const_vs_static constObject(99, "Constant");
    constObject.display(); // OK - const method
    ///.setValue(200); // Error - cannot modify const object

    // Example of static member
    cout << "Total instances created: " << const_vs_static::getInstanceCount() << endl;
    /// always we call the static fucntion with the name of the class

    // Example of const method usage
    cout << "Object1 ID: " << object1.getId() << endl;
    cout << "ConstObject ID: " << constObject.getId() << endl;

    return 0;
}
