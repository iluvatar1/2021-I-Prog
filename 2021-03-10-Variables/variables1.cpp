#include <iostream>

int main(int argc, char **argv)
{

    int a; // declararla
    int b = 1.99; // declararla e inicializarla. WARNING: se trunca

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    float  x = 4.5; // 32 bits -> sign mantissa(23 bits) *2^(exp(8) - 127) : 2^23 \simeq 8x10^6
    double y = -1.9e10; // 64 bits -> 1 en 10^-15

    std::cout << "sizeof(int): " << sizeof(int) << "\n";
    std::cout << "sizeof(float): " << sizeof(float) << "\n";
    std::cout << "sizeof(double): " << sizeof(double) << "\n";
    std::cout << "sizeof(char): " << sizeof(char) << "\n";
    std::cout << "sizeof(bool): " << sizeof(bool) << "\n";

    return 0;
}
