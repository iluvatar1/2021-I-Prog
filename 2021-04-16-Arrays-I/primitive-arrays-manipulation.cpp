// g++ -g -fsanitize=address 
#include <iostream>

const int N = 10;

int main(void)
{
    double data[N] {0};
//std::cout << data[0] << std::endl;
//std::cout << data[N-1] << std::endl;
//std::cout << data[N] << std::endl; // wrong

// initialize the array with even numbers
    for(int ii = 0; ii < N; ++ii){
        data[ii] = 2*ii;
    }

// print the array
    for(int ii = 0; ii < N; ++ii){
        std::cout << data[ii] << std::endl;
    }

// compute mean
    double sum = 0.0;
    for(int ii = 0; ii < N; ++ii){
        sum += data[ii];
    }
    std::cout << "Average = " << sum/N << std::endl;
}
