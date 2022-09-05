#include <iostream>

struct A
{
    using type = int;
};

struct B
{
    using type = float;
};

struct C {};


template <class T>
typename T::type f()
{
    return 3.14;
}

int main() 
{
    // std::cout << f<A>() << "\n";
    // std::cout << f<B>() << "\n";
    // std::cout << f<C>() << "\n";
    return 0;
}