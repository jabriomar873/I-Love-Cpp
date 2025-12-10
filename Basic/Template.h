//
// Created by Eagle on 12/10/2025.
//

#ifndef I_LOVE_CPP_TEMPLATE_H
#define I_LOVE_CPP_TEMPLATE_H

template<typename A, typename B, typename T> T Product1 (const A a, const B b); // specific type of return
template<typename A, typename B> auto Product2(const A a, const B b); /// the return type will be determined automatically
template<typename A=int , typename B=float > auto Product3 (A &a , B &b) ;//// with default value
#endif //I_LOVE_CPP_TEMPLATE_H