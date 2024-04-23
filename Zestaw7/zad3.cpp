#include <iostream>


template <int N, int M>
struct FastPow {
    static const int value = (M % 2 == 0) ?
                             FastPow<N, M / 2>::value * FastPow<N, M / 2>::value :
                             N * FastPow<N, M - 1>::value;
};


template <int N>
struct FastPow<N, 0> {
    static const int value = 1;
};


template <int N>
struct FastPow<N, 1> {
    static const int value = N;
};

int main() {
    std::cout << "2^10 = " << FastPow<2, 10>::value << std::endl;
    std::cout << "3^5 = " << FastPow<3, 5>::value << std::endl;
    return 0;
}
