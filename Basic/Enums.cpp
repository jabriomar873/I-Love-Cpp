
//
// Created by Eagle on 11/20/2025.
//

#include "Enums.h"
#include <iostream>

using namespace std;

// Traditional enum demonstration
void Enums::traditionalEnumDemo() {
    cout << "=== Traditional Enum Demo ===" << endl;
    
    // Using traditional enum
    Color myColor = RED;
    cout << "My color value: " << myColor << endl;  // Prints 0
    
    // Can compare with integers (not type-safe)
    if (myColor == 0) {
        cout << "Color is RED (value 0)" << endl;
    }
    
    // Implicit conversion to int
    int colorValue = GREEN;
    cout << "GREEN as integer: " << colorValue << endl;  // Prints 1
    
    // Using helper function for readable output
    cout << "Color name: " << colorToString(BLUE) << endl;
    
    // Looping through enum values
    cout << "\nAll colors:" << endl;
    for (int i = RED; i <= YELLOW; i++) {
        cout << "  " << colorToString(static_cast<Color>(i)) << endl;
    }
}

// enum class demonstration
void Enums::enumClassDemo() {
    cout << "\n=== Enum Class Demo ===" << endl;
    
    // Must use scope resolution
    TrafficLight light = TrafficLight::RED;
    
    // Cannot implicitly convert to int (more type-safe)
    // int value = light;  // ERROR: won't compile
    
    // Must use explicit cast
    int value = static_cast<int>(light);
    cout << "Traffic light value: " << value << endl;
    
    // Type-safe comparison
    if (light == TrafficLight::RED) {
        cout << "STOP! Light is " << trafficLightToString(light) << endl;
    }
    
    // Cannot accidentally compare with wrong type
    // if (light == Color::RED) {}  // ERROR: won't compile
    
    cout << "\nTraffic light sequence:" << endl;
    cout << "  " << trafficLightToString(TrafficLight::RED) << " - STOP" << endl;
    cout << "  " << trafficLightToString(TrafficLight::YELLOW) << " - CAUTION" << endl;
    cout << "  " << trafficLightToString(TrafficLight::GREEN) << " - GO" << endl;
}

// Practical examples
void Enums::practicalExamples() {
    cout << "\n=== Practical Examples ===" << endl;
    
    // Example 1: HTTP Status Codes
    cout << "\n--- HTTP Status Codes ---" << endl;
    processHttpStatus(HttpStatus::OK);
    processHttpStatus(HttpStatus::NOT_FOUND);
    processHttpStatus(HttpStatus::SERVER_ERROR);
    
    // Example 2: Priority System
    cout << "\n--- Priority System ---" << endl;
    Priority taskPriority = Priority::HIGH;
    
    switch (taskPriority) {
        case Priority::LOW:
            cout << "Task priority: LOW - Handle when free" << endl;
            break;
        case Priority::MEDIUM:
            cout << "Task priority: MEDIUM - Handle soon" << endl;
            break;
        case Priority::HIGH:
            cout << "Task priority: HIGH - Handle immediately" << endl;
            break;
        case Priority::CRITICAL:
            cout << "Task priority: CRITICAL - Drop everything!" << endl;
            break;
    }
    
    // Show memory efficiency of underlying type
    cout << "Priority enum size: " << sizeof(Priority) << " byte(s)" << endl;
    
    // Example 3: Day of week
    cout << "\n--- Day of Week ---" << endl;
    DayOfWeek today = DayOfWeek::WEDNESDAY;
    cout << "Today is: " << dayToString(today) << endl;
    
    if (today == DayOfWeek::SATURDAY || today == DayOfWeek::SUNDAY) {
        cout << "It's the weekend! 🎉" << endl;
    } else {
        cout << "It's a weekday - time to work! 💼" << endl;
    }
    
    // Check if it's Friday
    if (today == DayOfWeek::FRIDAY) {
        cout << "TGIF! 🎊" << endl;
    }
}

// Helper function to convert Color to string
string Enums::colorToString(Color c) {
    switch (c) {
        case RED:    return "Red";
        case GREEN:  return "Green";
        case BLUE:   return "Blue";
        case YELLOW: return "Yellow";
        default:     return "Unknown";
    }
}

// Helper function to convert TrafficLight to string
string Enums::trafficLightToString(TrafficLight light) {
    switch (light) {
        case TrafficLight::RED:    return "Red";
        case TrafficLight::YELLOW: return "Yellow";
        case TrafficLight::GREEN:  return "Green";
        default:                   return "Unknown";
    }
}

// Helper function to convert DayOfWeek to string
string Enums::dayToString(DayOfWeek day) {
    switch (day) {
        case DayOfWeek::MONDAY:    return "Monday";
        case DayOfWeek::TUESDAY:   return "Tuesday";
        case DayOfWeek::WEDNESDAY: return "Wednesday";
        case DayOfWeek::THURSDAY:  return "Thursday";
        case DayOfWeek::FRIDAY:    return "Friday";
        case DayOfWeek::SATURDAY:  return "Saturday";
        case DayOfWeek::SUNDAY:    return "Sunday";
        default:                   return "Unknown";
    }
}

// Process HTTP status codes
void Enums::processHttpStatus(HttpStatus status) {
    cout << "HTTP Status " << static_cast<int>(status) << ": ";
    
    switch (status) {
        case HttpStatus::OK:
            cout << "Request successful!" << endl;
            break;
        case HttpStatus::CREATED:
            cout << "Resource created successfully!" << endl;
            break;
        case HttpStatus::BAD_REQUEST:
            cout << "Bad request - check your input" << endl;
            break;
        case HttpStatus::UNAUTHORIZED:
            cout << "Unauthorized - please log in" << endl;
            break;
        case HttpStatus::NOT_FOUND:
            cout << "Resource not found" << endl;
            break;
        case HttpStatus::SERVER_ERROR:
            cout << "Internal server error" << endl;
            break;
        default:
            cout << "Unknown status" << endl;
    }
}

int main() {
    cout << "========================================" << endl;
    cout << "       C++ ENUMS DEMONSTRATION" << endl;
    cout << "========================================" << endl;
    
    // Run all demonstrations
    Enums::traditionalEnumDemo();
    Enums::enumClassDemo();
    Enums::practicalExamples();
    
    // Additional comparison example
    cout << "\n=== Enum Comparison ===" << endl;
    Color color1 = RED;
    Color color2 = BLUE;
    
    if (color1 == color2) {
        cout << "Colors are the same" << endl;
    } else {
        cout << "Colors are different: " 
             << Enums::colorToString(color1) 
             << " vs " 
             << Enums::colorToString(color2) << endl;
    }
    
    // Demonstrating enum arithmetic (traditional enum only)
    cout << "\n=== Enum Arithmetic (Traditional Enum) ===" << endl;
    Color nextColor = static_cast<Color>(RED + 1);
    cout << "Next color after RED: " << Enums::colorToString(nextColor) << endl;
    
    ///return 0;
}