#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {0, 1, 2, 3, 4};
    std::for_each(v.begin(), v.end(), [](int i) {
        std::cout << i << "\n";
    });
    return 0;
}
