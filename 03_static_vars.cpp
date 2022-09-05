#include <iostream>

struct A
{
    constexpr static int x = 0;
};

struct B
{
    constexpr static int x = 15;
};

struct C {};


template <class T>
int f()
{
    return T::x;
}

int main() 
{
    // std::cout << f<A>() << "\n";
    // std::cout << f<B>() << "\n";
    // std::cout << f<C>() << "\n";
    return 0;
}