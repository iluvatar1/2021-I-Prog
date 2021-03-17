#include <iostream>

const int a = 20;

void print_message(int a)
{
    std::cout << "Hello world!\n";
    std::cout << "Parametro a: " << a << "\n";
    std::cout << "Direccion de a en print: " << &a << std::endl;
}

int main(void)
{
    int a = 12;
    std::cout << "Direccion de a en main: " << &a << std::endl;
    print_message(a);
    return 0;
}
