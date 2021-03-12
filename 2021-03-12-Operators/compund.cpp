// This shows the sue of some compund operators
// Use a debugger to visualize
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
    double  a = 0, b = 3.1;

    a += 7;
    b *= 2;
    a += 2*b;

    int m = 4, n = 4;
    m /= 2;

    n &= 1;
    
	return 0;
}
