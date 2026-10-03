#include <iostream>
#include <cmath>

void weirdAlgorithm(long& n){

    while (n > 1){
        std::cout << n << ' ';

        if (n%2 == 0){
            n = n/2;
        }
        else if (n%2 == 1 && n!=1){
            n = (n*3)+1;
        }
    }
    if (n == 1){
        std::cout << n;
    }
}

int main(){

    long number;

    // std::cout << "Enter an integer" << '\n';
    std::cin >> number;

    weirdAlgorithm(number);

    // std::cout << sizeof(number) << '\n';
    // std::cout << number;
    // std::cout << pow(2, 32);

    // std::cout << pow(2,31)-1;
    // sizeof(std::string);

    return 0;
}