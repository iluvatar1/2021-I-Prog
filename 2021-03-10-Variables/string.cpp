#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string name = "William Fernando";
    std::string lastname = "Oquendo";
    std::string fullname = name + " " + lastname;

    std::cout << fullname << "\n"; // "William Fernando Oquendo"
    std::cout << fullname[0] << "\n"; // "W"
    std::cout << fullname[3] << "\n"; // "l"

    // print string
    for (int ii = 0; ii < fullname.size(); ++ii) {
        std::cout << fullname[ii];
    }
    std::cout << "\n";

    // print reversed string
    for (int ii = fullname.size() - 1; ii >= 0; --ii) {
        std::cout << fullname[ii];
    }
    std::cout << "\n";

    return 0;
}
