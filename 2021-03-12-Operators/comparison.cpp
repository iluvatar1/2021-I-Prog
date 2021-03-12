//
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
	bool flag = true;

    flag = (7 == 5);
    flag = (5 > 4);
    flag = (3 != 5);
    flag = (6 >= 6);
    flag = (5 < 5);

    int a = 2, b = 3, c = 4;
    flag = ( a == 5 );
    flag = ( a*b >= c );
    flag = ( b+4 == a );
    flag = ( (b=2) == a );

    flag = (2 > 5) && (3 < 1);
    flag = (2 > 5) || (3 < 1);
    return 0;
}
