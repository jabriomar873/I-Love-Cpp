//
// Created by Eagle on 11/19/2025.
//

#ifndef I_LOVE_CPP_MAIN1_H
#define I_LOVE_CPP_MAIN1_H

#include <string>

class main1
{
private:
    int value;
    std::string name;

public:
    main1();  // Constructor
    main1(int v, const std::string& n);  // Parameterized constructor
    ~main1();  // Destructor
    
    void setValue(int v);
    int getValue() const;
    void display() const;
};

#endif //I_LOVE_CPP_MAIN1_H