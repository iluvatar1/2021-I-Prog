// Calcular los numeros pares entre 1 y 100

// incluir las  librerias que vamos a usar
#include <iostream>
#include <cmath>

void print_even(int nmin, int nmax); // declaracion

// main function
int main(void)
{
  const int m = 1;
  const int n = 15;

  print_even(m, n);
  print_even(m/2, 2*n);
  
  return 0;
}

void print_even(int nmin, int nmax) // implementacion
{
  for(int ii = nmin; ii <= nmax ; ii = ii+1){
    //si el numero es par, entonces imprimir
    if (ii%2 == 0) {
      std::cout << ii << " ";
    }
  }
  std::cout << "\n";
}
