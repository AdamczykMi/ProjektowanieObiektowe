/*Wykład przedstawia prosty stos jako przykład pojemnika. Korzystając z typu stowarzyszonego (typedef T value_type)
 * zaimplementuj szablon funkcji sumującej wszystkie elementy stosu. */

#include<iostream>

using namespace std;


template<typename S>
typename S::value_type sum(S s) {
    typename S::value_type total;

    while (!s.is_empty()) {
        total += s.pop();
    }
    return total;
}


template<typename T = int, size_t N = 100>
class Stack {
private:
    T _rep[N];
    size_t _top;
public:
    typedef T value_type;

    Stack() : _top(0) {};

    void push(T val) { _rep[_top++] = val; }

    T pop() { return _rep[--_top]; }

    bool is_empty() const { return (_top == 0); }
};

int main() {

    Stack<int> intStack;
    intStack.push(5);
    intStack.push(10);

    std::cout << "Sum: " << sum(intStack) << std::endl;

    return 0;


}
