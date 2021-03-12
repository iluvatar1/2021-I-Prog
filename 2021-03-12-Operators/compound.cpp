// This shows the sue of some compund operators
// Use a debugger to visualize
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
  double  a = 0, b = 3.1;
  
  a = a + 7;
 
  a += 7; // a = a + 7
  b *= 2; // b = b*2
  a += 2*b; // a = a + 2*b; 

  int m = 4, n = 4;
  m /= 2; // m = m/2

  n &= 1; // n = n&1// i logico a nivel de bits
  // n : 100
  // 1 : 001
  //n&1: 000

  n = 4;
  n |= 1; // n = n|1 // o logico a nivel de bits
  // n : 100
  // 1 : 001
  //n|1: 101  
  
  return 0;
}
