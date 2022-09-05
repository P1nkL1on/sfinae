#include <iostream>

void g(int x, float y = 2.0f, double z = 3.14)
{

}

template <typename X, typename Y = float, typename Z = double>
void f(X x, Y y = 2.0f, Z z = 3.14)
{

}

int main() 
{
    // g(1);
    // g(1, 2);
    // g(1, 2.12);
    // g(1, 2, 3);
    // g(true, true, true);

    // f<int>(1);
    // f<int>(1, "ok");
    // f<int, const char *>(1, "ok");
    // f<int, const char *>(1);
    // f(1, 2.0f, 3.14);
    // f("ok", "ok", "ok");
    // f(true, true, true);

    return 0;
}