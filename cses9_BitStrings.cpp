#include <iostream>
#include <cmath>
int main(){
    long long n;
    std::cin>>n;
    long long prod=1;
    long long mod = (10*10*10*10*10*10*10*10*10)+7;
    for (int i=1; i<=n; i++){prod*=2;}
    std::cout << prod <<'\n';
    std::cout << mod;
    return 0;
}