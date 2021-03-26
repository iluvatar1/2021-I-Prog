#include <iostream>
#include <cmath>

double f(double x);
double trapecio(double a, double b, int npart);
double richardson_trapecio(double a, double b, int npart);

int main(int argc, char *argv[]) {
    std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    double A = 0.0;
    double B = M_PI;
    const double exact = 2.0;
    for (int p = 0; p <= 6; p++){
        int in = std::pow(10, p);
        double delta_trapecio = std::fabs(trapecio(A, B, in)-exact)/exact;
        double delta_rich_trap = std::fabs(richardson_trapecio(A, B, in)-exact)/exact;
        std::cout << in << "\t"
                  << delta_trapecio << "\t"
                  << delta_rich_trap << "\n";
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

double richardson_trapecio(double a, double b, int npart)
{
    const double alpha = 2;
    double i1 = trapecio(a, b, npart);
    double i2 = trapecio(a, b, npart*2);
    double integral = i2 + (i2-i1)/(std::pow(2, alpha) - 1);
    return integral;
}
