#include <iostream>
#include <random>
#include <cstdlib>
#include <cmath>

using fprt = double (double, double); // pointer type for integrand function

double f(double x, double y);
double random_integral(int seed, int nsamples, double area, fprt fun);
bool inregion(double x, double y);

int main(int argc, char **argv)
{
  int SEED = std::atoi(argv[1]);
  int N = std::atoi(argv[2]);

  random_integral(SEED, N, M_PI/4, f);

  return 0;
}

double f(double x, double y)
{
  return std::sin(std::sqrt(std::log(x+y+1)));
}

double random_integral(int seed, int nsamples, double area, fprt fun)
{
  std::mt19937 gen32(seed);
  std::uniform_real_distribution<double> xunif(0, 1);
  std::uniform_real_distribution<double> yunif(0, 1);

  double suma = 0;
  int n1 = 0;
  for (int ii = 0; ii < nsamples; ++ii) {
    double x = xunif(gen32);
    double y = yunif(gen32);
    if (inregion(x, y))
    {
      suma += fun(x, y);
      n1++;
    }
  }
  std::cout << "Integral: " << area*suma/n1 << "\n";
  std::cout << "Samples inside: " << n1 << "\n";
  std::cout << "Samples outside: " << nsamples - n1 << "\n";
  std::cout << "area: " << area << "\n";
  std::cout << "area numerical: " << 1.0*n1/(nsamples) << "\n";
  return area*suma/n1;
}

bool inregion(double x, double y)
{
  return (std::pow(x-0.5, 2) + std::pow(y-0.5, 2) <= 0.25);
}
