#include <bitset>
#include <iostream>
#include <vector>

int main() {
    std::string a, b;
    std::cout << "Enter the first binary number: ";
    std::cin >> a;
    std::cout << "Enter the second binary number: ";
    std::cin >> b;

    int num1 = std::stoi(a, nullptr, 2);
    int num2 = std::stoi(b, nullptr, 2);
    int sum = num1 + num2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Binary sum: " << std::bitset<sizeof(int) * 8>(sum).to_string() << std::endl;

    return 0;
}