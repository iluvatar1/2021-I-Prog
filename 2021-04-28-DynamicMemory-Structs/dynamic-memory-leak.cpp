#include <iostream>

void leakmemory(double * ptr);

int main(int argc, char *argv[])
{
    double *data = nullptr;
    for (int ii = 0; ii < 1000; ++ii) {
        leakmemory(data);
        if (ii%100 == 0) {
            std::cout << "ii: " << ii << "\n";
            std::cin.get();
        }
    }

    return 0;
}

void leakmemory(double * ptr)
{
  const int N = 15000000; // this can be read in runtime
  ptr = new double [N];//{0}; // ask for new memory

  //std::cout << ptr[N/2] << std::endl;

  delete [] ptr; // return memory
  ptr = nullptr;
}
