#include <iostream>

void f(...)
{
    std::cout << "fallback\n";
}

void f(int x)
{
    std::cout << "int\n";
}

void f(float x)
{
    std::cout << "float\n";
}

template <class T>
void f(T x)
{
    std::cout << "generic\n";
}

int main() 
{
    // f();
    // f(1, 2, 3, 4);
    // f(1);
    // f(2.0f);
    // f(std::string{});
    return 0;
}