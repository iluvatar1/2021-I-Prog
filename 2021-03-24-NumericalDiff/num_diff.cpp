#include <iostream>
#include <cstdlib>
#include <cmath>

double f(double x);
double forward(double x, double h);
double central(double x, double h);

int main(int argc, char *argv[]) {
    std::cout.precision(15);
    std::cout.setf(std::ios::scientific);

    double x = std::atof(argv[1]);
    double h = 0.1;
    const double deriv_exact = std::cos(x);
    for (h = 0.1; h >= 1.0e-7; h = h/10.0) {
        double delta_forward = std::fabs((forward(x, h) - deriv_exact)/deriv_exact);
        double delta_central = std::fabs((central(x, h) - deriv_exact)/deriv_exact);
        std::cout << h << "\t"
                  << delta_forward << "\t"
                  << delta_central << "\t"
                  << "\n";
    }
    return 0;
}

double forward(double x, double h)
{
    return (f(x+h) - f(x))/h;
}

double f(double x)
{
    return std::sin(x);
}

double forward(double x, double h)
{
    // ???
}
