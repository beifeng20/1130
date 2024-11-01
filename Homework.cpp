#include <algorithm>
#include <bitset>
#include <iostream>
#include <set>
#include <vector>
template <typename T>
std::set<T> findDuplicates(std::vector<T> vec) {
    std::set<int> duplicates;
    std::sort(vec.begin(), vec.end());
    std::set<int> distinct(vec.begin(), vec.end());
    std::set_difference(vec.begin(), vec.end(), distinct.begin(), distinct.end(),
                        std::inserter(duplicates, duplicates.end()));
    return duplicates;
}
void w1() {
    std::cout << "Question 1:" << std::endl;
    std::vector<int> vec = {2, 2, 4, 1, 3, 6, 6, 7, 6, 8};

    std::set<int> duplicates = findDuplicates(vec);
    for (auto &i : duplicates) {
        std::cout << i << ' ' << std::endl;
    }
    std::cout << "__________________________________________________________________________________________________________" << std::endl;
}
int str[] = {2, 43, 6, 99, 88, 66, 66, 90, 98, 99, 100};
void w2() {
    std::cout << "Question 2:" << std::endl;
    int evennum = 0;
    int oddnum = 0;
    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++) {
        if (str[i] % 2 == 0) {
            evennum += str[i];
        } else {
            oddnum += str[i];
        }
    }
    std::cout << "Sum_even:" << evennum << std::endl;
    std::cout << "Sum_odd:" << oddnum << std::endl;
    std::cout << "__________________________________________________________________________________________________________" << std::endl;
}
void w3() {
    std::cout << "Question 3:" << std::endl;
    int new_str[11];
    std::copy(std::begin(str), std::end(str), new_str);
    std::sort(new_str, new_str + 11, [](int a, int b) { return a > b; });
    std::cout << "new_str:";
    for (int i = 0; i < 3; i++) {
        std::cout << new_str[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "__________________________________________________________________________________________________________" << std::endl;
}
int factorial(int n) {
    int X = 1;
    for (int i = 1; i <= n; i++) {
        X *= i;
    }
    return X;
}
void w4() {
    std::cout << "Question 4:" << std::endl;
    int n = 10;
    int X = factorial(n);
    std::cout << "The factorial of 10 is:" << X << std::endl;
    std::cout << "__________________________________________________________________________________________________________" << std::endl;
}
void w5() {
    std::cout << "Question 5:" << std::endl;
    std::string a, b;
    std::cout << "first num:" << a << std::endl;
    std::cout << "secend num:" << b << std::endl;
    std::cin >> a;
    std::cin >> b;
    int num1 = std::stoi(a, 0, 2);
    int num2 = std::stoi(b, 0, 2);
    int sum = num1 + num2;
    std::cout << "sum:" << sum << std::endl;
    std::cout << "Binary sum:" << std::bitset<sizeof(int)>(sum);
    std::cout << "__________________________________________________________________________________________________________" << std::endl;
}
int main() {
    w1();
    w2();
    w3();
    w4();
    w5();
    return 0;
}