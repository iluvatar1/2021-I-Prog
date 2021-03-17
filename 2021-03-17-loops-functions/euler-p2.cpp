#include <iostream>
#include <cstdlib>

void sum_even_fibo(int nmax);

int main(int argc, char *argv[])
{
    int limit = std::atoi(argv[1]);

    sum_even_fibo(limit);

    return 0;
}

void sum_even_fibo(int nmax)
{
  int suma = 2;
  int na = 1, nb = 2;
  //std::cout << na << " ";
  //std::cout << nb << " ";
  int term = na + nb;
  while (term <= nmax) {
    if (term%2 == 0) {
      suma += term;
    }
    //std::cout << term << " ";
    na = nb;
    nb = term;
    term = na + nb;
  }
  //std::cout << "\n";
  std::cout << "suma: " << suma << "\n";
}

