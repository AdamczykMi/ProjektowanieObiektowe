//
// Created by majkel on 03.03.2024.
//
#include <iostream>

template<typename T> T maksimum(T a,T b) {return (a>b)?a:b;}

int main() {
    std::cout<<::maksimum<int>(7,5)<<std::endl;
    std::cout<<::maksimum<double>(3.1415,2.71)<<std::endl;
    std::cout<<::maksimum<std::string>("Ania","Basia")<<std::endl;
}
