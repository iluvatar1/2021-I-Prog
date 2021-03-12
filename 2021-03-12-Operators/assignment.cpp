// assingmaent operator: assings value, not memoery address
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
	int a, b;
    a = 10;
    b = 14;
    a = b;
    b = 7;

    std::cout << "a:" << a << std::endl;
    std::cout << "b:" << b << std::endl;
    std::cout << "&a:" << &a << std::endl;
    std::cout << "&b:" << &b << std::endl;

    a = 2 + (b = 5);
    std::cout << "a:" << a << std::endl;
    std::cout << "b:" << b << std::endl;

    a = b = 7;
    std::cout << "a:" << a << std::endl;
    std::cout << "b:" << b << std::endl;

	return 0;
}
