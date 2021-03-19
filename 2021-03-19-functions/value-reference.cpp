#include <iostream>

int add1(int a, int b); // a es una copia, b es una copia
int add2(int a, const int & c); // a es una copia, b es una referencia/homonimo

int main(int argc, char *argv[])
{
    int a = 12;
    int b = -10;

    std::cout << "Direccion de a en main: " << &a << std::endl;
    std::cout << "Direccion de b en main: " << &b << std::endl;
    std::cout << add1(a, b) << "\n";
    std::cout << "Valor de b en main: " << b << std::endl;
    std::cout << add2(a, b) << "\n";
    std::cout << "Valor de b en main: " << b << std::endl;
    return 0;
}

int add1(int a, int b)
{
    int r = a + b;
    std::cout << "Direccion de a local en addition copy: " << &a << std::endl;
    std::cout << "Direccion de b local en addition copy: " << &b << std::endl;
    return r;
}

int add2(int a, const int & c)
{
    int r = a + c;
    std::cout << "Direccion de a local en addition copy: " << &a << std::endl;
    std::cout << "Direccion de c local en addition ref : " << &c << std::endl;
    //c = -32; // cannot modify a const references
    return r;
}
