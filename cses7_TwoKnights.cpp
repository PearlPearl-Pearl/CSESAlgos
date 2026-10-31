#include <iostream>


long long combination_with2(const long long& n){
    long long result = ((n*n) * ((n*n)-1))/2;
    return result;
}


long long twoKnights(const int& k){
    long long result = combination_with2(k) - (4*(k-1)*(k-2));
    
    return result;
}

void completeSolution(const int& n){
    std::cout << 0 << '\n';
    std::cout << 6 << '\n';

    for (int i=3; i<=n; i++){
        long long ans = twoKnights(i);
        std::cout << twoKnights(i) << '\n';
    } 
}

int main(){
    int n = 0;
    std::cin >> n;
    completeSolution(n);

    return 0;
}