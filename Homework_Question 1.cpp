#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

template <typename T>
std::set<T> findDuplicates(std::vector<T> vec) {
    std::set<T> duplicates;
    std::sort(vec.begin(), vec.end());
    std::set<T> distinct(vec.begin(), vec.end());
    std::set_difference(vec.begin(), vec.end(), distinct.begin(), distinct.end(),
                        std::inserter(duplicates, duplicates.end()));
    return duplicates;
}

int main() {
    std::vector<int> vec = {2, 2, 4, 1, 3, 6, 6, 7, 6, 8};
    std::set<int> duplicates = findDuplicates(vec);
    for (auto &i : duplicates) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    return 0;
}