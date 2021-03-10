#include <iostream>

int main(int argc, char **argv)
{
    // overflow
    int a {2147483647}; // declararla
    std::cout << "a: " << a << "\n";
    a = a+1;
    std::cout << "a: " << a << "\n";
    // overflow
    a = -2147483648;
    std::cout << "a: " << a << "\n";
    a = a-1;
    std::cout << "a: " << a << "\n";

    // underflow
    float x {1.0e-48};
    std::cout << "x: " << x << "\n";

    // overflow
    x = 1.0e+40;
    std::cout << "x: " << x << "\n";

    return 0;
}
