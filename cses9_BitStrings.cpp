#include <iostream>
#include <cmath>

int main(){
    long long n = 0;
    std::cin >> n;

    long long num_31 = n/31;
    long long remain_31 = n%31;
    long long mod = 1000000007;

    long long prod = 1;
    long long fixed = pow(2, 31);
    long long fixed_remain = pow(2, remain_31);


    for (long long i=1; i<=num_31; i++){
        prod = (prod*fixed)%mod;
    }
    prod = (prod*fixed_remain)%mod;

    std::cout<<prod;

    return 0;
}