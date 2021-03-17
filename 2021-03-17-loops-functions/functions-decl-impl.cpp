#include <iostream>

void print_message(int a); // declarando la funcion

int main(void)
{
    int a = 12;
    std::cout << "Direccion de a en main: " << &a << std::endl;
    print_message(a);
    return 0;
}

// function implementation
void print_message(int a)
{
    std::cout << "Hello world!\n"; 
    std::cout << "Parametro a: " << a << "\n"; 
    std::cout << "Direccion de a en print: " << &a << std::endl;
}
