#include <iostream>
#include <vector>
int main(void)
{
  const long unsigned int N = 300000000;
  std::vector<double> data;
  data.resize(N);
  std::cout << data[N/2] << std::endl;
  
  return 0;
}
