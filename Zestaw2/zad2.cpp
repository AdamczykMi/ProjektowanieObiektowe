#include <iostream>

// Klasa bazowa
class Zwierze {
public:
    virtual void dajGlos() {
        std::cout << "Zwierze wydaje dzwiek\n";
    }

    void poruszajSie() {
        std::cout << "Zwierze porusza sie\n";
    }
};

// Klasa pochodna 1
class Pies : public Zwierze {
public:
    void dajGlos() override {
        std::cout << "Hau! Hau!\n";
    }
};

// Klasa pochodna 2
class Kot : public Zwierze {
public:
    void dajGlos() override {
        std::cout << "Miau! Miau!\n";
    }
};

int main() {
    // Polimorfizm dynamiczny
    Zwierze *wsk1 = new Pies();
    Zwierze *wsk2 = new Kot();

    wsk1->dajGlos(); // Wywołanie funkcji wirtualnej dla obiektu Pies
    wsk2->dajGlos(); // Wywołanie funkcji wirtualnej dla obiektu Kot

    // Polimorfizm statyczny
    Pies pies;
    Kot kot;

    pies.dajGlos(); // Wywołanie funkcji dla obiektu Pies (polimorfizm statyczny)
    kot.dajGlos();  // Wywołanie funkcji dla obiektu Kot (polimorfizm statyczny)

    return 0;
}
