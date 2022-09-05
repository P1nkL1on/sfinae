#include <iostream>

template <int S>
int f()
{
    return S;
}

template <int A, int B>
int summ()
{
    return A + B;
}

int main() 
{
    // std::cout << f<2>() << "\n";
    // std::cout << f<256>() << "\n";
    // std::cout << f<10>() << "\n";
    // std::cout << summ<1, 1>() << "\n";
    // std::cout << summ<2, 3>() << "\n";
    // std::cout << summ<0, -500>() << "\n";
    // std::cout << summ<0, summ<40, 40>>() << "\n";
    return 0;
}