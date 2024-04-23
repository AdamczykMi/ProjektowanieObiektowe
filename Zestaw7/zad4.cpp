#include <iostream>
#include <cmath> // For pow and factorial functions

// Recursive template to calculate factorial
template <unsigned int n>
struct Factorial {
    static const unsigned long long value = n * Factorial<n - 1>::value;
};

template <>
struct Factorial<0> {
    static const unsigned long long value = 1;
};


template <int n, typename T>
struct SinTerm {
    static T value(T x) {
        return (n % 2 == 0 ? 1 : -1) * std::pow(x, 2 * n + 1) / Factorial<2 * n + 1>::value;
    }
};


template <int N, typename T>
struct SinSeries {
    static T value(T x) {
        return SinTerm<N - 1, T>::value(x) + SinSeries<N - 1, T>::value(x);
    }
};

template <typename T>
struct SinSeries<0, T> {
    static T value(T x) {
        return SinTerm<0, T>::value(x);
    }
};

int main() {
    double x = M_PI / 6; // Example x = π/6
    std::cout << "sin(" << x << ") approximated to 5 terms: " << SinSeries<5, double>::value(x) << std::endl;
    std::cout << "Actual sin(" << x << "): " << std::sin(x) << std::endl;
    return 0;
}
