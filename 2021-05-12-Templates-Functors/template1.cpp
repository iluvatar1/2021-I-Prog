#include <iostream>

// declaration
template <class T>
T getmax(T a, T b);

int main(void)
{
    std::cout << getmax(3, 2) << std::endl;
    std::cout << getmax(-3.5, -2.9) << std::endl;
    std::cout << getmax(-4.5f, -12.9f) << std::endl;
    std::cout << getmax('a', 'h') << std::endl;
    // std::cout << getmax(-3.5, -2) << std::endl; // error, tipos de datos diferentes
    return 0;
}

// implementation
template <class T>
T getmax(T a, T b)
{
    T maximum = a;
    if (b > a) {
        maximum = b;
    }
    return maximum;
}
