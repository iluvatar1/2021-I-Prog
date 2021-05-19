#include <iostream>
#include <vector>
#include <set>

void process(const std::vector<int> & data);

int main(int argc, char *argv[]) {

    std::vector<int> test{10, 10, 2, 4, 6, -1, -1 , 9, 80};

    process(test);

    return 0;
}

void process(const std::vector<int> & data)
{
    std::set<int> values;
    for(auto x: data) {
        values.insert(x);
    }

    // print
    for (auto x: values) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

