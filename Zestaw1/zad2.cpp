/* Argumenty szablonu mogą być wydedukowane z argumentów funkcji. Zaimplementuj funkcję convert, której zadaniem jest zmiana typu podanego argumentu funkcji. */

#include <iostream>

template<typename T, typename U>
T convert(U u) {
    return (T) u;
};

int main() {
    std::cout << convert<int>(15.3) << std::endl;
}
