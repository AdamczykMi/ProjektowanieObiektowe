#include <iostream>
#include <memory>

using namespace std;

class Test {
public:
    ~Test () {
        cout << "del" << endl;
    }
};

int main () {
    shared_ptr<Test> a = make_shared<Test>(); // Licznik referencji = 1
    shared_ptr<Test> b(a);                    // Licznik referencji = 2
    {
        shared_ptr<Test> c(a);                // Licznik referencji = 3
    }                                         // c wychodzi poza zakres, licznik referencji = 2
}                                             // a i b wychodzą poza zakres, licznik referencji spada do 0, obiekt jest niszczony


