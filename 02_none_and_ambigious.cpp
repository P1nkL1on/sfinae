#include <iostream>

void f(int x)
{
    std::cout << "int\n";
}

void f(float x)
{
    std::cout << "float\n";
}

int main() 
{
    // f(3.14);
    // f(std::string{});
    return 0;
}