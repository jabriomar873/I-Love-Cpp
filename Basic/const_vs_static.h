//
// Created by Eagle on 11/19/2025.
//

#ifndef CONST_VS_STATIC_H
#define CONST_VS_STATIC_H

#include <string>
#include <vector>

/**
 * @class const_vs_static
 * @brief A class demonstrating the usage of const and static keywords
 *
 * This class shows different ways to use const and static:
 * - static member variables (shared across all instances)
 * - const member functions (cannot modify object state) !!! no setters
 * - static member functions (class-level functions)
 * - const member variables (cannot be modified after initialization)
 */
class const_vs_static {
private:
    static int instanceCount; // Static member to count instances
    const int id{}; // Const member - cannot be modified after initialization
    int value;
    std::string name;
    std::vector<int> vec;

public:
    const_vs_static(); // Constructor
    const_vs_static(int v, const std::string &n); // Parameterized constructor
    ~const_vs_static(); // Destructor

    void setValue(int v);

    int getValue() const; // Const member function - cannot modify object state
    void display() const; // Const member function

    static int getInstanceCount(); // Static member function
    int getId() const { return id; } // Const member function returning const member

    // Example usage:
    // const const_vs_static obj(42, "example");  // Creates a const object
    // obj.getValue();  // OK - const member function
    // obj.setValue(10);  // Error - cannot call non-const function on const object
};
#endif // CONST_VS_STATIC_H