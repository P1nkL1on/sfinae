#include <iostream>
#include <type_traits>

template <class T>
typename std::enable_if_t<std::is_arithmetic_v<T>, T> f(T t) 
{
    std::cout << "arithmetic T\n";
    return t;
}

template <class T>
typename std::enable_if_t<!std::is_arithmetic_v<T>, void> f(T t) 
{
    std::cout << "fallback\n";
}

int main() 
{
    // f(1);
    // f(3.14);
    // f("ok");
    // f(std::string{});
    return 0;
}