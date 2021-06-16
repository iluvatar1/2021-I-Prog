// generate random numbers between -2 and 2
#include <random>
#include <iostream>
#include <cstdlib>

void gen_rand_num_uniform(int seed, double a, double b, int nsamples);
void gen_rand_num_normal(int seed, double a, double b, int nsamples);

int main(int argc, char *argv[]) {
    int SEED = std::atoi(argv[1]);
    int N = std::atoi(argv[2]);
    double A = std::atof(argv[3]);
    double B = std::atof(argv[4]);

    //gen_rand_num_uniform(SEED, A, B, N);
    gen_rand_num_normal(SEED, A, B, N);

    return 0;
}

void gen_rand_num_uniform(int seed, double a, double b, int nsamples)
{
    // declarar el random engine
    std::mt19937 gen32(seed);
    // declarar la distribucion
    std::uniform_real_distribution<double> dis(a, b);
    // generar nsamples numbers e imprimirlos
    for(int n = 0; n < nsamples; n++) {
        std::cout << dis(gen32) << "\n";
    }

}

void gen_rand_num_normal(int seed, double a, double b, int nsamples)
{
    // declarar el random engine
    std::mt19937 gen32(seed);
    // declarar la distribucion
    std::normal_distribution<double> dis(a, b);
    // generar nsamples numbers e imprimirlos
    for(int n = 0; n < nsamples; n++) {
        std::cout << dis(gen32) << "\n";
    }

}
