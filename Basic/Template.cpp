//
// Created by Eagle on 12/10/2025.
//

#include"Template.h"

#include <iostream>
#include <ostream>

template<typename A, typename B, typename T>
T Product1(const A a, const B b) {
    std::cout<<"a= "<<a<<" b= "<<b<<std::endl; // for this one we can choose the type of the return
    return static_cast<T>(a * b);
}

template<typename A, typename B>
auto Product2(const A a, const B b) {
    std::cout<<"a= "<<a<<" b= "<<b<<std::endl;
    return a * b;
}

template<typename A,typename B> auto Product3(A &a, B &b) { /// this one it has default value
    std::cout<<"a= "<<a<<" b= "<<b<<std::endl;
    return a*b;
}

int main() {
    float a=5.35;
    int b=10;
    std::cout<<Product1<float,int,int>(a,b)<<std::endl;
    std::cout<<Product2<float,int>(a,b)<<std::endl;
    std::cout<<Product3(a,b)<<std::endl;
    return 0;
}