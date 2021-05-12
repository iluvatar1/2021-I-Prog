#include <iostream>

// declaration
double getmax(double a, double b);

int main(void)
{
    std::cout << getmax(3, 2) << std::endl;
    std::cout << getmax(-3.5, -2.9) << std::endl;    
    return 0;
}

// implementation
double getmax(double a, double b)
{
    double maximum = a;
    if (b > a) {
        maximum = b;
    }
    return maximum;
}
