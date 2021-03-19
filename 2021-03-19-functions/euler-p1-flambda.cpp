#include <iostream>
#include <cstdlib>

void print_sum_multiples(int m, int n);

int main(int argc, char *argv[])
{
    int a = std::atof(argv[1]);
    int b = std::atof(argv[2]);

    print_sum_multiples(a, b);

    return 0;
}

void print_sum_multiples(int m, int n)
{
    auto fmult = [](int a, int b) { return a%b == 0; };
    int suma = 0;
    for (int ii = m; ii < n; ++ii) {
        //if ( (ii%3 == 0) || (ii%5 == 0) ) {
        if ( fmult(ii, 3) || fmult(ii, 5) ) {
            suma += ii;
        }
    }
    std::cout << "La suma es: " << suma << "\n";
}

