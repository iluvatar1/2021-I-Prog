#include <iostream>
#include <cstdlib>
#include <cmath>

double f(double x);
double forward(double x, double h);
double central(double x, double h);
double richardson_forward(double x, double h);
double richardson_central(double x, double h);

int main(int argc, char *argv[]) {
    std::cout.precision(15);
    std::cout.setf(std::ios::scientific);

    double x = std::atof(argv[1]);
    double h = 0.1;
    const double deriv_exact = std::cos(x);
    for (h = 0.1; h >= 1.0e-10; h = h/10.0) {
        double delta_forward = std::fabs((forward(x, h) - deriv_exact)/deriv_exact);
        double delta_central = std::fabs((central(x, h) - deriv_exact)/deriv_exact);
        double delta_forward_richardson = std::fabs((richardson_forward(x, h) - deriv_exact)/deriv_exact);
        double delta_central_richardson = std::fabs((richardson_central(x, h) - deriv_exact)/deriv_exact);
        std::cout << h << "\t"
                  << delta_forward << "\t"
                  << delta_central << "\t"
                  << delta_forward_richardson << "\t"
                  << delta_central_richardson << "\t"
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

double central(double x, double h)
{
    return (f(x+h/2) - f(x-h/2))/h;
}

double richardson_forward(double x, double h)
{
    double d1 = forward(x, h);
    double d2 = forward(x, h/2);
    return (4*d2 - d1)/3.0;
}
double richardson_central(double x, double h)
{
    double d1 = central(x, h);
    double d2 = central(x, h/2);
    return (4*d2 - d1)/3.0;
}
