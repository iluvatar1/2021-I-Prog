#include <iostream>

int main(int argc, char *argv[]) {
    const int N = 10;
    double data[N] = {1, 2, 3};
    double * ptr = nullptr;

    ptr = data;

    std::cout << data[0] << "\n";  // 1
    std::cout << &data[0] << "\n"; // 0xALGO
    std::cout << data << "\n";     // 0xALGO
    std::cout << ptr << "\n";      // 0xALGO
    std::cout << ptr[0] << "\n";   // 1
    std::cout << ptr[1] << "\n";   // 2

    ptr = &data[1];
    std::cout << ptr[1] << "\n";     // 3 
    std::cout << *(ptr+1) << "\n";   // 3
    
    
    return 0;
}
