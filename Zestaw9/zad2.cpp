#include <iostream>
#include <memory>

int main() {
    int* raw_ptr;
    std::shared_ptr<int> shared_ptr;
    std::unique_ptr<int> unique_ptr;

    std::cout << "Wielkosc zwyklego wskaznika: " << sizeof(raw_ptr) << " bajtow" << std::endl;
    std::cout << "Wielkosc shared_ptr: " << sizeof(shared_ptr) << " bajtow" << std::endl;
    std::cout << "Wielkosc unique_ptr: " << sizeof(unique_ptr) << " bajtow" << std::endl;

    return 0;
}
