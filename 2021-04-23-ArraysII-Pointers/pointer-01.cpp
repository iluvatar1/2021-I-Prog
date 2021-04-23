#include <iostream>

int main(void)
{
  int a = 67;
  int * ptr = nullptr;

  ptr = a;

  std::cout << a << std::endl;
  std::cout << &a << std::endl;

  std::cout << ptr << std::endl;
  std::cout << *ptr << std::endl;
  std::cout << &ptr << std::endl;

  *ptr = 32; // igual a hacer a = 32;
  std::cout << a << std::endl;

  return 0;
}
