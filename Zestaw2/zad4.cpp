#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<typename T>
class SequenceGen {
private:
    T _start;
    T _step;
public:
    SequenceGen(T start = T(), T step = 1) : _start(start), _step(step) {}

    T operator()() {
        T tmp = _start;
        _start += _step;
        return tmp;
    }
};

const size_t n = 20;

int main() {
    vector<int> v(n);

    generate_n(v.begin(), n, SequenceGen<int>(1, 2));

    // Znajdź pierwszy element większy od 4
    vector<int>::iterator it = find_if(v.begin(), v.end(), bind2nd(greater<int>(), 4));
    if (it != v.end()) {
        cout << "Pierwszy element wiekszy od 4: " << *it << endl;
    } else {
        cout << "Nie znaleziono elementu wiekszego od 4." << endl;
    }

    return 0;
}
