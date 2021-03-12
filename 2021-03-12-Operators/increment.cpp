//
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
	int a = 0;
    int b = 1;
    int c = 7;

    a = ++b; // pre: first increment, then assing
    a = c++; // post: first assing, then increment

	return 0;
}
