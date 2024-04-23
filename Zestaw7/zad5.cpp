#include <iostream>

// Template function to calculate the dot product of two vectors
template<size_t N>
double inner(double *x, double *y) {
    double sum = 0.0;
    for (size_t i = 0; i < N; ++i) {
        sum += x[i] * y[i];
    }
    return sum;
}

int main() {
    // Example usage of the inner template
    const size_t N = 3;
    double x[N] = {1.0, 2.0, 3.0};
    double y[N] = {4.0, 5.0, 6.0};

    double result = inner<N>(x, y);
    std::cout << "Dot product of x and y is: " << result << std::endl;

    return 0;
}
