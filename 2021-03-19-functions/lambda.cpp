// requires c++11: -std=c++11
#include <iostream>

int main(int argc, char *argv[]) {
    auto flambda = [](int a, int b) {return a < b; };
    bool flag = flambda(3, 4);
    std::cout << flag << "\n";
    std::cout << flambda(4, 3) << "\n";
    return 0;
}
