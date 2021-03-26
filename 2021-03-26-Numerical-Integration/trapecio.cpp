#include <iostream>
#include <cmath>

double f(double x);
double trapecio(double a, double b, int npart);

int main(int argc, char *argv[]) {
    std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    double A = 0.0;
    double B = M_PI;
    for (int p = 0; p <= 6; p++){
        int in = std::pow(10, p);
        std::cout << in << "\t"
                  << trapecio(A, B, in) << "\n";
    }
    return 0;
}

double f(double x) {
    return std::sin(x);
}

double trapecio(double a, double b, int npart) {
    double h = (b-a)/npart;
    double result = 0.0;
    double x = 0;
    for (int ii = 1; ii < npart; ++ii) {
        x = a + ii*h;
        result += f(x);
    }
    result += 0.5*(f(a) + f(b));
    result *= h;
    return result;
}
