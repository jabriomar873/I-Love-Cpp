//
// Created by Eagle on 11/20/2025.
//

#ifndef PTR_VS_REF_H
#define PTR_VS_REF_H

#include <iostream>

/**
 * @class ptr_vs_ref
 * @brief Demonstrates the usage and differences between pointers and references in C++
 *
 * Pointers: Variables that store memory addresses
 * - Can be null
 * - Can be reassigned
 * - Must be dereferenced to access value
 *
 * References: Aliases for existing variables
 * - Cannot be null
 * - Cannot be reassigned
 * - Direct access to value
 *
 */
class ptr_vs_ref {
private:
    int value;

public:
    // Pointer examples
    static void pointerBasics() {
        int x = 10;
        int *ptr = &x; // Pointer to x
        std::cout << "Value through pointer: " << *ptr << std::endl;
        *ptr = 20; // Modify through pointer
        std::cout << "Modified value: " << x << std::endl;
    }

    // Reference examples
    static void referenceBasics() {
        int x = 10;
        int &ref = x; // Reference to x
        std::cout << "Value through reference: " << ref << std::endl;
        ref = 20; // Modify through reference
        std::cout << "Modified value: " << x << std::endl;
    }

    // Comparison between pointer and reference
    static void comparePointerReference() {
        int x = 10;
        int y = 20;

        // Pointer can be reassigned
        int *ptr = &x;
        ptr = &y; // OK

        // Reference cannot be reassigned
        int &ref = x;
        // ref = y;  // This assigns value, not reference

        // Pointer can be null
        int *nullPtr = nullptr;
        // Reference must be initialized
        // int& nullRef;  // Error: references must be initialized
    }
};


#endif //PTR_VS_REF_H