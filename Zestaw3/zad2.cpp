#include <string>
#include <iostream>

using namespace std;

template <typename T, typename U>
T convert(U u) {
        return static_cast<T>(u);
}

template <>
string convert<string>(double d) {
    return to_string(d);
}

template <>
int convert<int, double>(double u) {
    return static_cast<int>(u);
}

template <>
double convert<double, int>(int u) {
    return static_cast<double>(u);
}

int main() {

    cout << convert<int>(24.82) << endl;
    cout << convert<double>(54) << endl;
    cout << convert<string>(22.22) << endl;
}