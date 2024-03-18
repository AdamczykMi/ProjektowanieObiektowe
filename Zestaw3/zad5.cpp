#include <iostream>
#include <set>

int main() {
    std::set<int, std::greater<>> decreasing_set;

    decreasing_set.insert(5);
    decreasing_set.insert(3);
    decreasing_set.insert(8);
    decreasing_set.insert(1);
    decreasing_set.insert(10);

    for (const auto& num : decreasing_set) {
        std::cout << num << " ";
    }

    return 0;
}
