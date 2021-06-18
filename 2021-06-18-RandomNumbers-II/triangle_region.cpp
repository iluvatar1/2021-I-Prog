#include <iostream>
#include <random>
#include <cstdlib>
#include <cmath>

int main(int argc, char **argv)
{
  int SEED = std::atoi(argv[1]);
  int N = std::atoi(argv[2]);

  const double SQRT3 = std::sqrt(3);
  
  std::mt19937 gen32(SEED);
  std::uniform_real_distribution<double> xunif(-1, 1);
  std::uniform_real_distribution<double> yunif(0, SQRT3);
  std::uniform_real_distribution<double> z(0, 1);
  
  for (int ii = 0; ii < N; ++ii) {
    double xr = xunif(gen32); 
    ///*
    double yr = yunif(gen32);
    if ( ( -1 <= xr and xr <0 and yr < (SQRT3*xr + SQRT3) ) or 
         (  0 <= xr and xr <1 and yr < (-SQRT3*xr + SQRT3) ) ) {
      std::cout << xr << "  " << yr << "\n";
    }
    //*/
    /* // BAD
    double yr = 0;
    if (-1 <= xr and xr <0) {
      yr = z(gen32)*(SQRT3*xr + SQRT3);
    } else {
      yr = z(gen32)*(-SQRT3*xr + SQRT3);
    }
    std::cout << xr << "  " << yr << "\n";
    */
  }
  
  return 0;
}

