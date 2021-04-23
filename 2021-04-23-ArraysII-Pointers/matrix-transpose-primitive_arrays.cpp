#include <iostream>

int main(void)
{
  const int M = 3; // rows
  const int N = 5; // columns

	double A[M][N] = {{0.0}};
	double AT[N][M] = {{0.0}};

	// fill matrix
	for(int ii = 0; ii < M; ++ii) {
        for(int jj = 0; jj < N; ++jj) {
            A[ii][jj] = ii*N + jj;
        }
	}

	// transpose
	for(int ii = 0; ii < M; ++ii) {
        for(int jj = 0; jj < N; ++jj) {
            AT[jj][ii] = A[ii][jj];
        }
	}

	// print original matrix
	std::cout << "Original matrix : \n";
	for(int ii = 0; ii < M; ++ii) {
        for(int jj = 0; jj < N; ++jj) {
            std::cout << A[ii][jj] << "  ";
        }
        std::cout << "\n";
	}

	// print transposed matrix
	std::cout << "Transposed matrix : \n";
	for(int ii = 0; ii < N; ++ii) {
        for(int jj = 0; jj < M; ++jj) {
            std::cout << AT[ii][jj] << "  ";
        }
        std::cout << "\n";
	}

	return 0;
}
