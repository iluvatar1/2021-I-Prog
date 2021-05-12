#include <iostream>

// declaration
int getmax(int a, int b);

int main(void)
{
    std::cout << getmax(3, 2) << std::endl;
    
    return 0;
}

// implementation
int getmax(int a, int b)
{
    int maximum = a;
    if (b > a) {
        maximum = b;
    }
    return maximum;
}
