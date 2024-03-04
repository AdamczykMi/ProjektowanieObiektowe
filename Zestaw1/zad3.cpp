/* Wykorzystując pozatypowe parametry szablonów przedstaw sposób implementacji iloczynu (dot_product) skalarnego dwóch wektorów o wymiarze N */

#include <iostream>

template<size_t N, typename T>
T dot_product(T *a, T *b) {
    T total = 0.0;
    for (size_t i = 0; i < N; ++i)
        total += a[i] * b[i];

    return total;
};

int main() {
    double a[] = {1.0, 2.0, 3.0};
    double b[] = {4.0, 5.0, 6.0};

    std::cout << dot_product<3>(a, b) << std::endl;
}