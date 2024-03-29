#include <iostream>
#include <list>

using namespace std;

template <typename Iter>
int perform(Iter i, std::random_access_iterator_tag) {
    std::cout << "random-access iterator\n";
    return 1;
}

template <typename Iter>
int perform(Iter i, std::forward_iterator_tag) {
    std::cout << "one-directional iterator\n";
    return 2;
}

template <typename Iter>
int perform(Iter i, std::bidirectional_iterator_tag) {
    std::cout << "bidirectional iterator\n";
    return 3;
}

template <typename Iter>
inline int operation(Iter i) {
    return perform(i, typename std::iterator_traits<Iter>::iterator_category());
}

int main() {

    list<int> testList;
    operation(testList.begin());

    int testArr[3];
    operation(testArr);
}