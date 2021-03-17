#include <iostream>

void print_message(double a)
{
    std::cout << "Hello world!\n"; 
    std::cout << "Parametro a: " << a << "\n"; 
}

int main(void)
{
    int m = 12;
    print_message(m);
    return 0;
}
