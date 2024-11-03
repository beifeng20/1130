#include <iostream>
int main() {
    int str[] = {2, 43, 6, 99, 88, 66, 66, 90, 98, 99, 100};
    int evennumber = 0;
    int oddnumber = 0;
    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++) {
        if (str[i] % 2 == 0) {
            evennumber += str[i];
        } else {
            oddnumber += str[i];
        }
    }
    std::cout << "evennumber:" << evennumber << std::endl;
    std::cout << "oddnumber:" << oddnumber << std::endl;
    return 0;
}