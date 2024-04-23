#include <iostream>

template <typename T>
T factorial_recursive(T n) {
    if (n <= 1) return 1;
    else return n * factorial_recursive(n - 1);
}

int main() {
    int num = 5;
    std::cout << "Silnia liczby " << num << " (rekurencyjnie) wynosi: " << factorial_recursive(num) << std::endl;
    return 0;
}
