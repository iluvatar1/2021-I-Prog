// generate random numbers between -2 and 2
#include <random>
#include <iostream>
#include <cstdlib>
#include <vector>

template <class T>
void gen_rand_num(int seed, int nsamples, T dis,
                  double xmin, double xmax, int nbins);

int main(int argc, char *argv[]) {
    int SEED = std::atoi(argv[1]);
    int N = std::atoi(argv[2]);
    double A = std::atof(argv[3]);
    double B = std::atof(argv[4]);
    double XMIN = std::atof(argv[5]);
    double XMAX = std::atof(argv[6]);
    int NBINS = std::atoi(argv[7]);

    //std::uniform_real_distribution<double> dis(A, B);
    //std::normal_distribution<double> dis(A, B);
    std::gamma_distribution<double> dis(A, B);
    gen_rand_num(SEED, N, dis, XMIN, XMAX, NBINS);


    return 0;
}
template <class T>
void gen_rand_num(int seed, int nsamples, T dis,
                  double xmin, double xmax, int nbins)
{
    std::vector<int> histo(nbins, 0);
    double dx = (xmax-xmin)/nbins;

    // declarar el random engine
    std::mt19937 gen32(seed);
    // generar nsamples numbers e imprimirlos
    for(int n = 0; n < nsamples; n++) {
        double r = dis(gen32);
        if (xmin <= r && r < xmax) {
            int boxid = int((r-xmin)/dx);
            histo[boxid]++;
        }
    }
    for(int ii = 0; ii < nbins; ++ii) {
        std::cout << xmin + ii*dx << "\t" << 1.0*histo[ii]/nsamples/dx << "\n";
    }

}
