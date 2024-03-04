/*Zaimplementuj szablon funkcji  maksimum(), wybierającej większy z dwóch argumentów. Argumenty są jednakowego typu i  posiadają operator< */

#include <iostream>

template<typename T>
T maksimum(T a, T b) { return (a > b) ? a : b; }

int main() {
    std::cout << ::maksimum<int>(7, 5) << std::endl;
    std::cout << ::maksimum<std::string>("Ania", "Basia") << std::endl;
}
