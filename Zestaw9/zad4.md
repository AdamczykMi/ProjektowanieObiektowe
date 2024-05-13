## Tworzenie pojedynczego obiektu

```cpp
template< class T, class... Args >
std::unique_ptr<T> make_unique( Args&&... args );
```
Ta wersja szablonu tworzy pojedynczy obiekt typu T, przekazując argumenty do konstruktora tego obiektu.


## Tworzenie tablicy
```cpp
template< class T >
std::unique_ptr<T> make_unique( std::size_t size );
```
Ta wersja szablonu tworzy dynamiczną tablicę obiektów typu T o rozmiarze size.