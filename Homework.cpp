#include<iostream>
#include<algorithm>
int str[] = {2, 43, 6, 99, 88, 66, 66, 90, 98, 99, 100};
void w1(){
    std::cout << "Question 1:" << std::endl;
    int evennum = 0;
    int oddnum = 0;
    for (int i = 0; i < sizeof(str) / sizeof(str[i]);i++){
        if (str[i]%2==0){
            evennum += str[i];
        }else{
            oddnum += str[i];
        }
    }
    std::cout << "Sum_even:" << evennum << std::endl;
    std::cout << "Sum_odd:" << oddnum << std::endl;
    std::cout << "__________________________________________________________________________________________________________" << std::endl;
}
void w2(){
    std::cout << "Question 2:" << std::endl;
    int new_str[11];
    std::copy(std::begin(str), std::end(str), new_str);
    std::sort(new_str, new_str + 11, [](int a, int b) { return a > b; });
    std::cout << "new_str:";
    for (int i = 0; i < 3;i++){
        std::cout << new_str[i] <<" ";
    }
    std::cout << std::endl;
    std::cout << "__________________________________________________________________________________________________________" << std::endl;
}
void w3(){
    std::cout << "Question 2:" << std::endl;
    
}
int main(){
    w1();
    w2();
    return 0;
}