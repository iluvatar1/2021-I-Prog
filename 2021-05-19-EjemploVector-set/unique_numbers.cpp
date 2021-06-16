#include <iostream>
#include <vector>

void process(const std::vector<int> & data);
bool search(int val, std::vector<int> & vec);

int main(int argc, char *argv[]) {

    std::vector<int> test{10, 10, 2, 4, 6, -1, -1 , 9, 80};

    process(test);

    return 0;
}

void process(const std::vector<int> & data)
{
    const int N = 20;
    /////////////// std::vector
    std::vector<int> values;
    // using push_back, cualquier N
    for(auto x:data) {
        if (false == search(x, values)) {
            values.push_back(x); // values = [1, 3, 4] ; values.push_back(7)-> [1, 3, 4, 7, X,X ] -> size == 4, capacity == 6
        }
    }

    // print
    for (auto x: values) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

bool search(int val, std::vector<int> & vec)
{
    for (auto x : vec) {
        if (x == val) {
            return true;
        }
    }
    return false;
}
