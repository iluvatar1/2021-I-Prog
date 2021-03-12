//
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
  bool flag = true;

  flag = (7 == 5); // false // 0 
  flag = (5 > 4); // true
  flag = (3 != 5); // true
  flag = (6 >= 6); // true
  flag = (5 < 5); // false

  int a = 2, b = 3, c = 4;
  flag = ( a == 5 ); // false
  flag = ( a*b >= c ); // true
  flag = ( b+4 == a ); // false
  flag = ( (b=2) == a ); // true

  flag = (2 > 5) && (3 > 1); // false && true -- false
  flag = (2 > 5) || (3 > 1); // false || true -- true
  return 0;
}
