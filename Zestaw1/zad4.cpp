/*Szablony parametrów szablonu umożliwiają przekazanie nazwy szablonu jako argumentu szablonu funkcji.
 * Podaj prosty przykład jak można dedukować wartości pozatypowych argumentów szablonu (void f(C<K>))*/

#include <iostream>

template<template<int> class C, int K>
void f(C<K>) {
    std::cout << K << std::endl;
}

template<int N>
struct SomeClass {};

int main() {
    SomeClass<1> c1;
    SomeClass<2> c2;

    f(c1);
    f(c2);

    return 0;
}
