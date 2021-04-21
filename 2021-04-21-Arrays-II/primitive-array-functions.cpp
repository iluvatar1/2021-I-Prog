#include <iostream>

// por defecto, los arreglos primitivos se pasan por referencia
void initialize(double xdata[], int size);
void print(const double xdata[], int size);
void average(const double xdata[], int size);

int main(void)
{
  const int N = 10;
  double data[N]{0};

  // initialize the array with even numbers
  initialize(data, N);

  // print the array
  print(data, N);

  // compute mean
  average(data, N);

  return 0;
}


void print(const double xdata[], int size)
{
  // print the array
  for(int ii = 0; ii < size; ++ii){
    std::cout << xdata[ii] << std::endl;
  }
}

void average(const double xdata[], int size)
{
  double sum = 0.0;
  for(int ii = 0; ii < size; ++ii){
    sum += xdata[ii];
  }
  std::cout << "Average = " << sum/size << std::endl;
}

void initialize(double xdata[], int size)
{
  for(int ii = 0; ii < size; ++ii){
    xdata[ii] = 2*ii;
  }
}
