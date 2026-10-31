#include <iostream>


long long combination_with2(const long long& n){
    long long result = ((n*n) * ((n*n)-1))/2;
    return result;
}


long long twoKnights(const long long& k){
    long long result = combination_with2(k) - (4*(k-1)*(k-2));
    
    return result;
}

void completeSolution(const int& n){
    for (int i=1; i<=n; i++){
        if (n==1){
            std::cout << 0 << '\n';
        }
        else{
        std::cout << twoKnights(i) << '\n';
        }
    } 
}

int main(){
    int n = 0;
    std::cin >> n;
    completeSolution(n);

    return 0;
}