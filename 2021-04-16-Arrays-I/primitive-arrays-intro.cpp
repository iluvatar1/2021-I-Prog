// g++ -g -fsanitize=address
#include <iostream>
#include <array>
#include <vector>

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
    std::array<double, 5> array1 {1, 2};
    array1[3] = 0.8;
    std::cout << array1[2] << std::endl;
    std::vector<double> array2;
    array2.resize(50);
    array2[25] = -9.8;
    std::cout << array2[2] << std::endl;
}
