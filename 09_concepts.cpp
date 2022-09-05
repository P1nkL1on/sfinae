#include <iostream>

void f(...)
{
    std::cout << "fallback\n";
}

template <class T>
auto f(T t) -> decltype((void)(t.x), void())
{
    std::cout << "has x member\n";
}

struct A { int x; };
struct B { };

int main()
{
    // f(A{});
    // f(B{});
    return 0;
}