#include<iostream>
#include<vector>
#include<list>

using namespace std;

template<class InputIterator, class T>
T accumulate(InputIterator first, InputIterator last, T init) {
    T total = init;
    for (; first != last; ++first) {
        total += *first;
    }
    return total;
}

int main() {

    list<int> lista;

    lista.push_back(1);
    lista.push_back(2);
    lista.push_back(3);
    lista.push_back(4);

    cout << accumulate(lista.begin(), lista.end(), 0) << endl;

    vector<double> wektor;

    wektor.push_back(1.1);
    wektor.push_back(2.1);
    wektor.push_back(3.1);
    wektor.push_back(4.1);

    cout << accumulate(wektor.begin(), wektor.end(), 0) << endl; // To wywołanie generuje błąd

    cout << accumulate(wektor.begin(), wektor.end(), 0.0) << endl;

    return 0;
}
