#include <iostream>
#include <vector>

using ll = long long;

bool isEven(const int& n){
    return n%2 == 0;
}

void twoSets (const ll& n){
    ll sum = (n*(n+1))/2;

    if (isEven(sum)){
        std::cout << "YES" << '\n';
        ll target = sum/2;
        ll so_far = 0;
        std::vector<ll> array1;
        std::vector<ll> array2;
        
        for (int i=n; i>=1; i--){
            if (so_far+i <= target){
                so_far += i;
                array1.push_back(i);
            }
            else{
                array2.push_back(i);
            }
        }

        std::cout << array1.size() << '\n';
        for (int num : array1){
            std::cout << num << ' ';
        }
        std::cout << '\n';
        std::cout << array2.size() << '\n';
        for (int num : array2){
            std::cout << num << ' ';
        }
    }
    else{
        std::cout << "NO";
    }
}

int main(){
    int n = 0;
    std::cin >> n;

    twoSets(n);

    return 0;
}