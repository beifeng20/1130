#include<iostream>
#include <bitset>
int factorial(int n) {
    int X = 1;
    for (int i = 1; i <= n; i++) {
        X *= i;
    }
    return X;
}
int main(){
    int n = 10;
    int X = factorial(n);
    std::cout << "The factorial of 10 is:" << X << std::endl;
    return 0;
}