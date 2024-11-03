#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int str[] = {2, 4, 6, 4, 6, 7, 4, 99, 999, 5, 999, 48, 8888, 7689};
    std::vector<int> vec(str, str + sizeof(str) / sizeof(int));
    std::sort(vec.begin(), vec.end());

    int n = vec.size();
    for (int i = n - 1; i >= n - 3; --i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}