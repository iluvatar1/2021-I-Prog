// = assignment operator: assings value, not memory address
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
  // variable?
  // nombre
  // tipo
  // alcance
  // direccion memoria
  
  int a, b;
  a = 10;
  b = 14;
  a = b; // se copia el valor
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
