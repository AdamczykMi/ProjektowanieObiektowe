#include <iostream>
#include <cstring>

// Przeciążenie funkcji max dla typów T
template<typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

// Przeciążenie funkcji max dla wskaźników na typ T
template<typename T>
T* max(T* a, T* b) {
    return (*a > *b) ? a : b;
}

// Specjalizacja szablonu dla tablicy danych typu T
template<typename T>
T* max(T* data, size_t n) {
    T* maxPtr = data;
    for (size_t i = 1; i < n; ++i) {
        if (data[i] > *maxPtr) {
            maxPtr = &data[i];
        }
    }
    return maxPtr;
}

// Przeciążenie funkcji max dla wskaźników na typ char (C-style strings)
char* max(char* a, char* b) {
    return (strcmp(a, b) > 0) ? a : b;
}

// Przeciążenie funkcji max dla stałych wskaźników na typ char (const C-style strings)
const char* max(const char* a, const char* b) {
    return (strcmp(a, b) > 0) ? a : b;
}

// Przeciążenie funkcji max dla mieszanych wskaźników na typ char (C-style strings)
char* max(char* a, const char* b) {
    return (strcmp(a, b) > 0) ? a : const_cast<char*>(b);
}


int main() {
    int a = 5, b = 10;
    std::cout << "Max of " << a << " and " << b << " is " << max(a, b) << std::endl;

    double x = 3.14, y = 2.71;
    std::cout << "Max of " << x << " and " << y << " is " << max(x, y) << std::endl;

    char str1[] = "apple";
    char str2[] = "banana";
    std::cout << "Max of \"" << str1 << "\" and \"" << str2 << "\" is \"" << max(str1, str2) << "\"" << std::endl;

    const char str3[] = "orange";
    const char str4[] = "grape";
    std::cout << "Max of \"" << str3 << "\" and \"" << str4 << "\" is \"" << max(str3, str4) << "\"" << std::endl;

    char str5[] = "kiwi";
    const char str6[] = "mango";
    std::cout << "Max of \"" << str5 << "\" and \"" << str6 << "\" is \"" << max(str5, str6) << "\"" << std::endl;

    return 0;
}
