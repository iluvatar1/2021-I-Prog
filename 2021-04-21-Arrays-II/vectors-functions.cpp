#include <iostream>
#include <vector>
#include <numeric>

void initialize(std::vector<double> & a);
void print(const std::vector<double> & a);
void print_average(const std::vector<double> & a);

int main(void)
{
  const int N = 10;
  // double data[N]{0};
  std::vector<double>  data(N);

  // initialize the array with even numbers
  initialize(data);

  // print the array
  print(data);

  // compute mean
  print_average(data);

  return 0;
}


void print(const std::vector<double> & a)
{
  // print the array
  for(auto val : a){
    std::cout << val << "  ";
  }
  std::cout << std::endl;
}

void print_average(const std::vector<double> & a)
{
  //double sum = 0.0;
  //for (auto val : a) {
  //    sum += val;
  //}
  double sum = std::accumulate(a.begin(), a.end(), 0.0);
  std::cout << "Average = " << sum/a.size() << std::endl;
}

void initialize(std::vector<double> & a)
{
  for(int ii = 0; ii < a.size(); ++ii){
    a[ii] = 2*ii;
  }
}
