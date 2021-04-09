// bisection example
#include <iostream>
#include <cstdlib>
#include <cmath>

using fptr = double (double);

const double M = 68.1;
const double G = 9.81;
const double VT = 40;
const double T = 10;

double f(double x);
double bisection(double xl, double xu, double eps, fptr fun, int & nsteps);


int main (int argc, char *argv[])
{
    double XL = std::atof(argv[1]);
    double XU = std::atof(argv[2]);;
    double eps = std::atof(argv[3]);
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    int steps = 0;
    double root = bisection(XL, XU, eps, f, steps);
    std::cout << root << "\t" << f(root) << "\t" << steps << "\n";
	return 0;
}

double f(double x)
{
    return M*G*(1 - std::exp(-x*T/M))/x - VT;
}

double bisection(double xl, double xu, double eps, fptr fun, int & nsteps)
{
    nsteps = 0;
    double xr = 0.5*(xl + xu);
    while (1) {
        xr = 0.5*(xl + xu);
        nsteps++;
        //std::cout << xr << "\n";
        if (std::fabs(fun(xr)) < eps) {
            break;
        } else if (fun(xl)*fun(xr) < 0) {
            xu = xr;
        } else {
            xl = xr;
        }
        //std::cout << xl << "\t" << xu << "\n";
    }
    return xr;
}
