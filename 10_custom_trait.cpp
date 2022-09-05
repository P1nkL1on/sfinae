#include <iostream>
#include <type_traits>

template <typename T>
struct has_const_x_getter
{
private:
    static int detect(...);

    template <typename V>
    static auto detect(const V &v) -> decltype((int)(v.x()), void()) {}

public:
    static constexpr bool value = std::is_void_v<decltype(detect(T{}))>;
};

template <typename T>
constexpr bool has_const_x_getter_v = has_const_x_getter<T>::value;

struct A { int x() const; };
struct B { int x(); };
struct C { void x() const; };
struct D { int y() const; };
struct E { };
struct F { const int &x() const; };

int main() 
{
    // static_assert(has_const_x_getter_v<A>);
    // static_assert(has_const_x_getter_v<B>);
    // static_assert(has_const_x_getter_v<C>);
    // static_assert(has_const_x_getter_v<D>);
    // static_assert(has_const_x_getter_v<E>);
    // static_assert(has_const_x_getter_v<F>);
    return 0;
}