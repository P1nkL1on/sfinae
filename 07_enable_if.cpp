#include <iostream>


template <bool B, class T = void>
struct enable_if {};
 
template <class T>
struct enable_if<true, T> { typedef T type; };

template <bool B, class T>
using enable_if_t = typename enable_if<B, T>::type;


template <class T>
struct is_integral {};

template <>
struct is_integral<int>
{
    const static bool value = true;
};


template <class T>
struct is_floating_point {};

template <>
struct is_floating_point<float>
{
    const static bool value = true;
};


struct T
{
    enum { INT, FLOAT } type;

    template <typename Integer, enable_if_t<is_integral<Integer>::value, bool> = true>
    T(Integer) : type(INT) {}

    template <typename Floating, enable_if_t<is_floating_point<Floating>::value, bool> = true>
    T(Floating) : type(FLOAT) {}
};

int main()
{
    // std::cout << enable_if_t<true, int>(3.14) << "\n";
    // std::cout << enable_if_t<true, float>(3.14) << "\n";
    // std::cout << enable_if_t<false, int>(3.14) << "\n";
    // std::cout << T(1).type << "\n";
    // std::cout << T(3.14f).type << "\n";
    // std::cout << T(3.14).type << "\n";
    // std::cout << T("okey").type << "\n";
    return 0;
}