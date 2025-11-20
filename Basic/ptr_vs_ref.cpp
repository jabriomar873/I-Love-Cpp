//
// Created by Eagle on 11/20/2025.
//

#include "ptr_vs_ref.h"
#include <iostream>

// Function demonstrating pass by pointer
void modifyByPointer(int *ptr) {
    if (ptr != nullptr) {
        *ptr *= 2;
    }
}

// Function demonstrating pass by reference
void modifyByReference(int &ref) {
    ref *= 2;
}

int main() {
    std::cout << "=== Pointer Basics ===" << std::endl;
    ptr_vs_ref::pointerBasics();

    std::cout << "\n=== Reference Basics ===" << std::endl;
    ptr_vs_ref::referenceBasics();

    std::cout << "\n=== Pointer vs Reference Comparison ===" << std::endl;
    ptr_vs_ref::comparePointerReference();

    std::cout << "\n=== Practical Usage Examples ===" << std::endl;
    int number = 10;

    std::cout << "Original number: " << number << std::endl;

    // Using pointer
    modifyByPointer(&number);
    std::cout << "After pointer modification: " << number << std::endl;

    // Using reference
    modifyByReference(number);
    std::cout << "After reference modification: " << number << std::endl;

    return 0;
}
