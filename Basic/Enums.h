
//
// Created by Eagle on 11/20/2025.
//

#ifndef I_LOVE_CPP_ENUMS_H
#define I_LOVE_CPP_ENUMS_H

#include <iostream>
#include <string>

/**
 * @class Enums
 * @brief Demonstrates different types of enums in C++
 *
 * Types covered:
 * 1. Traditional enum (C-style)
 * 2. enum class (C++11 scoped enum)
 * 3. Enum with explicit values
 * 4. Enum with underlying type
 */

// 1. Traditional enum - Values are in global scope
enum Color {
    RED,      // 0
    GREEN,    // 1
    BLUE,     // 2
    YELLOW    // 3
};

// 2. enum class (Scoped enum) - More type-safe, values are scoped
enum class TrafficLight {
    RED,
    YELLOW,
    GREEN
};

// 3. Enum with explicit values
enum HttpStatus {
    OK = 200,
    CREATED = 201,
    BAD_REQUEST = 400,
    UNAUTHORIZED = 401,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};

// 4. Enum class with underlying type
enum class Priority : unsigned char {
    LOW = 1,
    MEDIUM = 2,
    HIGH = 3,
    CRITICAL = 4
};

// 5. Days of week example
enum class DayOfWeek {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

class Enums {
public:
    // Traditional enum examples
    static void traditionalEnumDemo();

    // enum class examples
    static void enumClassDemo();

    // Practical examples
    static void practicalExamples();

    // Helper functions
    static std::string colorToString(Color c);
    static std::string trafficLightToString(TrafficLight light);
    static std::string dayToString(DayOfWeek day);
    static void processHttpStatus(HttpStatus status);
};

#endif //I_LOVE_CPP_ENUMS_H