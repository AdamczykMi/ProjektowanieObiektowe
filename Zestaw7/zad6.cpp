#include <iostream>


template<size_t N, typename T>
T dot(T *x, T *y) {
    T sum = 0;
    for (size_t i = 0; i < N; ++i) {
        sum += x[i] * y[i];
    }
    return sum;
}

int main() {

    const size_t N = 3;
    double x[N] = {1.0, 2.0, 3.0};
    double y[N] = {4.0, 5.0, 6.0};

    double result = dot<N, double>(x, y);
    std::cout << "Dot product of x and y is: " << result << std::endl;


    int x_int[N] = {1, 2, 3};
    int y_int[N] = {4, 5, 6};

    int result_int = dot<N, int>(x_int, y_int);
    std::cout << "Dot product of x_int and y_int is: " << result_int << std::endl;

    return 0;
}
