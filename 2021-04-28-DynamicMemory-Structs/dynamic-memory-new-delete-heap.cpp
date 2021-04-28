#include <iostream>

int main(int argc, char *argv[])
{
  const int N = 1500000; // this can be read in runtime
  double *data = nullptr;
  data = new double [N];//{0}; // ask for new memory

  std::cout << data[N/2] << std::endl;

  delete [] data; // return memory
  //data = nullptr;
  //delete [] data; // return memory
  
  return 0;
}
