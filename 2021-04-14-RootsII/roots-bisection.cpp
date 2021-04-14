#include <iostream>
#include <cmath>

using fptr = double (double); // puntero de funcion con forma : double function(double x);

const double M = 68.1;
const double G = 9.81;
const double VT = 40;
const double T = 10;

double f(double x);
// retorna la raiz, que es un double
// fptr es un apuntador a funcion del tipo
// using fptr = double(double)
// por ejemplo
double bisection(double xl, double xu, double eps, fptr func, int nmax, int & nsteps);

int main (int argc, char *argv[])
{
    double XL = std::atof(argv[1]);
    double XU = std::atof(argv[2]);;
    double eps = std::atof(argv[3]);
    int NMAX = 1000;
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    int steps = 0;
    double root = bisection(XL, XU, eps, f, NMAX, steps);
    std::cout << "\t" << root << "\t" << f(root) << "\t" << steps << "\n";
}

double f(double x)
{
    return M*G*(1 - std::exp(-x*T/M))/x - VT;
}

double bisection(double xl, double xu, double eps, fptr func, int nmax, int & nsteps)
{
    nsteps = 0;
    double xr = xl;
    do {
        xr = 0.5*(xl + xu);
        nsteps++;
        //std::cout << xr << "\n";
        if (std::fabs(func(xr)) < eps) {
            break;
        } else if (func(xl)*func(xr) < 0) {
            xu = xr;
        } else {
            xl = xr;
        }
        //std::cout << xl << "\t" << xu << "\n";
    } while (nsteps <= nmax);
    return xr;
}
