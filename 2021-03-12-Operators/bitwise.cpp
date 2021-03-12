//
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
  int a = 6; // 110
  int b = 4; // 100

  int c = a & b; // c = 100 = 4 
  c = a | b; // c = 110 = 6
  c = a ^ b; // c = 010 = 2 
  c = ~a;    // c = 001 = -7 
  c = a<<2;  // c = 11000 = 
  return 0;
}
