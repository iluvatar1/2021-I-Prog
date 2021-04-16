// g++ -g -fsanitize=address
#include <iostream>

const int N = 10;

int main(void)
{
    double data[N] = {1, 2, 3}; // Se inicializan unos, los demas en cero
    std::cout << data[0] << std::endl;
    std::cout << data[N-1] << std::endl;
    std::cout << data << std::endl;
    std::cout << &data[0] << std::endl;
    // std::cout << data[N] << std::endl; // BAD
    // std::cout << data[-1] << std::endl; // BAD

}
